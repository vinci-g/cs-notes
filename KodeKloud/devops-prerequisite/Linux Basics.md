# Linux Basics

## Table of Contents

- [Shell Types](##shell-types)
- [Basic Commands](##basic-commands)
- [Directories](##directories)
- [Files](##files)
- [User Accounts](##user-accounts)
- [Downloading Files](##downloading-files)
- [Check OS Version](##check-os-version)
- [Package Management](##package-management)
- [Services](##services)

## Shell Types

The CLI that runs commands to interact with the OS is the Linux Shell.

Types of Shells:

1. Bourne Shell (Sh Shell)
2. C Shell (csh or tcsh)
3. Z Shell (zsh)
4. Bourne Again Shell (bash)

To determine which shell you are on:

``` shell
echo $SHELL
```

`echo` prints on the screen. `$` (dollar command) specify an environment
variable

## Basic Commands

| Command | Function                  |
|---------|---------------------------|
| echo    | Print to screen           |
| ls      | List files & folders      |
| cd      | Change directory          |
| pwd     | Present working directory |
| mkdir   | Make directory            |

To run multiple commands, separate it with a semicolon.

``` shell
cd new_directory; mkdir www; pwd
```

## Directories

| Command                                 | Function                                               |
|-----------------------------------------|--------------------------------------------------------|
| mkdir -p /tmp/dir1/dir2/dir3            | The -p option **makes a directory hierarchy**          |
| rm -r /tmp/my~dir1~                     |                                                        |Removes directory with all it\'s contents|
| cp -r my~dir1~(directory) /tmp/my~dir1~ | Copy directory + contents from one location to another |

## Files

| Command                                 | Function                                                           |
|-----------------------------------------|--------------------------------------------------------------------|
| touch \<file\>                          | Create a new file without contents                                 |
| cat \> \<file\>                         | Add contents to a file. (CTRL + D) to exit prompt and save content |
| cat \<file\>                            | Show contents of a file                                            |
| cp \<file\> \<target~path~/file~name~\> | Copy file                                                          |
| mv \<file\> \<target~path~/file~name~\> | Move/Rename a file                                                 |
| rm \<file\>                             | Remove a file                                                      |

## User Accounts

| Command                      | Function                                       |
|------------------------------|------------------------------------------------|
| whoami                       | Determine user                                 |
| id                           | Gives more information about the user          |
| su \<username\>              | Switch user                                    |
| ssh \<username\>@192.168.1.2 | Login to another system using a different user |
| sudo (prefix)                | Grant root privilege to current user           |

## Downloading Files

| Command                        | Function                                                    |
  |--------------------------------|-------------------------------------------------------------|
| curl \<url\> -O                | Download file from a url. The -O saves the result to a file |
| wget \<url\> -O \<file~name~\> | Same with curl                                              |

## Check OS Version

| Command              | Function                    |
  |----------------------|-----------------------------|
| ls /etc/\*release\*  | Determine the OS            |
| cat /etc/\*release\* | View more details on the OS |

## Package Management

Package managers help install various software on the Linux system.

*In these examples we will use RPM (Red Hat Package Manager), check
which package manager your distribution use.*

| Command                | Function          |
|------------------------|-------------------|
| rpm -i \<package.rpm\> | Install package   |
| rpm -e \<package.rpm\> | Uninstall package |
| rpm -q \<package.rpm\> | Query package     |

`rpm` does not care about dependencies. Package managers like `yum`
install the packages along with it\'s dependencies.

| Command                               | Function                                                |
  |---------------------------------------|---------------------------------------------------------|
| yum repolist                          | Determine list of repos available for a package manager |
| yum list \<package\>                  | Show installed/available package                        |
| yum remove \<package\>                | Remove installed package                                |
| yum --showduplicates list \<package\> | Show all available versions of a package                |
| yum install \<package\>-\<version\>   | Install specific version                                |

## Services

Services in Linux allow the user to configure software to run in the
background all the time and automatically when servers are rebooted,
while maintaining the right order of start up.

| Command                             | Function                              |
  |-------------------------------------|---------------------------------------|
| service \<service~name~\> start     | Start service                         |
| systemctl start \<service~name~\>   | Start service (newer method)          |
| systemctl stop \<service~name~\>    | Stop service                          |
| systemctl status \<service~name~\>  | Check service status                  |
| systemctl enable \<service~name~\>  | Configure service to start at startup |
| systemctl disable \<service~name~\> | Disable a service at startup          |

To use a program as a service, we must configure it by creating a
`systemd` unit file (may be located at `/etc/systemd/system`).

1. Create a `systemd` unit file named as `<name>.service` with the
   following contents:

``` 
# myapp.service

[Service]
ExecStart=/usr/bin/python3 /opt/code/my_app.py

# ExecStart is the command to run the application
```

2. Run `systemctl daemon-reload` to let systemd know that there is a
   new service configured.

3. `systemctl start my_app` to start the service. a.
   `systemctl status my_app` to check if the service is running and
   active.

4. `systemctl stop my_app` to stop the active service.

5. To configure the service to run automatically at startup:

```
# myapp.service
[Unit]
Description=My python web application

[Service]
ExecStart=/usr/bin/python3 /opt/code/my_app.py
ExecStartPre=/opt/code/configure_db.sh
ExecStartPost=/opt/code/email_status.sh
Restart=always

# ExecStart is the command to run the application
# ExecStartPre runs dependencies before starting the application
# ExecStartPost runs dependencies after starting the application
# Restart allows the app to restart in case it crashes

[Install]
WantedBy=multi-user.target

# WantedBy directive specifies that the service would run after a particular service
# runs at boot up

# In this case, my_app would run after multi-user target
```

a. Then run `systemctl enable my_app` to enable the service to run
at bootup.
