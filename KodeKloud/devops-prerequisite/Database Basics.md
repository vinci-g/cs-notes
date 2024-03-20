# Database Basics

## Table of Contents

- [MySQL](#mysql)

## MySQL 

Simple steps to install a database (note that this is not the case for a production environment):

1. Download installer package for installing MySQL in the downloads page.
2. Install MySQL server.
3. Start the service.

We can validate in the logs located at `/var/log/mysqld.log`. The log shows the temporary password when the database is installed.

To connect to the database we run `mysql -u root -p<password>`.
	- `-u` specifies that the user as root
	- `-p` specifies the password(without space between the password and the argument)


The first step that we should do is change the default password by running this inside the MySQL prompt:

```sql
ALTER USER 'root'@'localhost' IDENTIFIED BY 'MyNewPass4!';
```

The `root` user is the default user created and it has all permissions on all databases by default. On a production environment however, we should create users that restricts permissions on certain databases depending on the user.
To create a user:

```sql
CREATE USER 'john'@'localhost' IDENTIFIED BY 'MyNewPass4!';
```

`localhost` here in the query specifies in which system the user can connect. We can put a specific address in place of `localhost` or we can allow the user to connect to all systems by using the `%` symbol.

### Priviliges

We use the `GRANT` command to grant priviliges to a certain user.

|PERMISSION    |PRIVILIGES             |
|--------------|-----------------------|
|ALL PRIVILIGES|Grants all access      |
|CREATE        |Create databases       |
|DROP          |Delete databases       |
|DELETE        |Delete rows from tables|
|INSERT        |Insert rows into tables|
|SELECT        |Read/Query tables      |
|UPDATE        |Update rows in tables  |

Sample queries:

```sql
GRANT <PERMISSION> ON <DB.TABLE> TO 'john'@'%';

GRANT SELECT ON school.persons TO 'john'@'%';

GRANT SELECT, UPDATE ON school.persons TO 'john'@'%';

GRANT SELECT ON school.* TO 'john'@'%';

GRANT ALL PRIVILEGES ON *.* TO 'john'@'%';

SHOW GRANTS FOR 'john'@'localhost';
```