# Web Server

## Table of Contents

-	[Introduction](#introduction)
	-	[Servers](#servers)
- [Web Frameworks](#web-frameworks)
- [Web Servers](#web-servers)
	- [Apache Web Server](#apache-web-server)
	- [Python Flask](#python-flask)
	- [ExpressJS](#expressjs)

## Introduction

There are multiple application types namely:

1. Desktop
2. Mobile
3. Web
4. Analytics
5. Problem Solving

Each of these applications can be categorized into either *standalone* or *client-server* model. Our desktop calculator app is an example of a standalone application as all logic is inside the application itself. Slack on another hand is an example of a client-server application as it needs to communicate with a server to deliver messages.

### Servers

There are different kinds of servers for example:

- Web Servers - serves web content
- Application Servers - backend that is responsible for the business logic
- DB Servers
- Email Servers
- Backup Servers

To name a few.

These servers have programs that listen for incoming requests in a particular port and these programs are what makes them servers otherwise they are just another virtual/physical machine.

In small scale, we could only have a single server that serves both web and application logic but in larger scale applications, we can see that it can split into different services that handle different parts of a system.

## Web Frameworks

Some popular web frameworks are:

1. Express (NodeJS)
2. Spring (Java)
3. Django (Python)
4. Flask (Python)

Web frameworks basically provides an easy way to develop web applications where web servers can listen requests, perform an operation, and send back data.

## Web Server

While a web framework helps in developing the application, a web server hosts the application.

**Web Servers** (can be referred to as *static web servers*) are servers that host static websites.

**Application Servers** are servers that host dynamic websites.

### Apache Web Server

1. Open source
2. Web server

To install and start Apache Web Server:

```shell
yum install httpd

# to run
service httpd start

# to view the status
service httpd status
```

Logs can be seen at:

- `/var/log/httpd/access_log`
- `/var/log/httpd/error_log`

Every server also has a configuration file where we can govern how the server operates, stored at `/etc/httpd/conf/httpd.conf`

A single Apache server can host multiple websites and for that work, the files and config of each website is configured as a *virtual host* within the Apache config file which we can configure to each have its own server name and document root.

Even if the server can host multiple websites, all of these are in a single IP and port. The Apache server is just intelligent enough to determine the name and redirect the user request to the particular directory or path.

Every change in the config needs a restart: `service httpd restart`

Multiple configuration structure:

- `/etc/httpd/conf/httpd.conf`
- `/etc/httpd/conf/houses.conf`
- `/etc/httpd/conf/oranges.conf`

*@httpd.conf*
```
Listen 80

DocumentRoot "var/www/html"

ServerName www.houses.com:80

Include conf/houses.conf
Include conf/oranges.conf
```

*@houses.conf*
```
<VirtualHost *:80>
	ServerName www.oranges.com
	DocumentRoot var/www/oranges
</VirtualHost>
```

*@oranges.conf*
```
<VirtualHost *:80>
	ServerName www.houses.com
	DocumentRoot var/www/houses
</VirtualHost>
```

### Apache Tomcat

Basic installation setup for Apache Tomcat:

```shell
yum install <java_jdk>

wget <tomcat_download_url>

# extract the tar package
tar xvf <tomcat_package>

# run installation script
./<apache_tomcat>/bin/startup.sh
```

Directory structure:

- `bin` - contains scripts needede to operate the web server
- `conf` - contains config files
	- `server.xml` file contains the `connector` where requests are received, port 8080 by default
- 

Steps to host web apps in Apache Tomcat:

1. Package the application to a `.war` file (web archive) using `jar`, maven, or gradle.
	i. `jar -cvf app.war *`
		a. `jar` is the Java Archive Tool command.
		b. `-c` "create a new archive"
		c. `-v` "verbose (detailed output)"
		d. `-f app.war` specify the name of the archive
		e. `*` match all files and dir in the current directory
2. Move the packaged file inside `webapps` directory inside Apache Tomcat directory.
3. We can check the logs if the app is hosted (in `catalina.out`).
4. View the app in the browser at `localhost:<PORT>/<app_name>`

### Python Flask

Some tools used to deploy Flask applications in production are:

1. Gunicorn
	i. `gunicon main:app -w 2`
		a. `main`: file name
		b. `app`: flask instance
		c. `-w 2`: use 2 workers
2. uWSGI
3. Gevent
4. Twisted Web

### ExpressJS

Some tools used to deploy an ExpressJS app in production are:

1. supervisord
2. forever
3. pm2

## IP and Ports

IP addresses are assigned when a machine is connected to a network via ethernet cable, WiFi, etc.

The command `ip addr show` shows the interface and its IP address.

Each of these network interface are divided into multiple logical components known as *ports* that are a communication endpoint where programs can listen to for requests.

Specifying the `host` as `0.0.0.0` on an application listens to all interfaces on the specified port.

Not specifying the `host` defaults to `127.0.0.1` which is the address for the loopback interface, which is also known as `localhost`. Note that all host has a built in loopback interface.