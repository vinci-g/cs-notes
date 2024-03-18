# Application Basics

## Table of Contents

-   [Java](#java)
    -   [Java Installation](#java-installation)
    -   [Java Development Kit (JDK)](#java-development-kit-jdk)
    -   [Building and Packaging](#building-and-packaging)

## Java

### Java Installation

1.  [Download Java](https://www.oracle.com/java/technologies/downloads/)
2.  [Follow the installation instructions for your specific OS](https://docs.oracle.com/en/java/javase/21/install/overview-jdk-installation.html)

### Java Development Kit (JDK)

JDK is a set of tools that helps in developing, running, and building Java applications in a system.

| Develop                        | Build              | Run                                                |
|--------------------------------|--------------------|----------------------------------------------------|
| jdb - debugger                 | javac - compiler   | JRE - Java Runtime Environment                     |
| javadoc - document source code | jar - archive code | java - command line utility to run the application |

All the tools can be seen inside the `/bin` directory inside the `jdk` directory.

### Building and Packaging

**The build process:**
1. Develop
2. Compile - `javac MyClass.java`
3. Package - `jar cf MyClass.jar ...`
4. Document - `javadoc MyClass.java`

#### Compilation

1. Develop source code.
2. Compile
3. Run

The compiler compiles the Java source code to machine code.

Before a Java source code compiles to machine code, it undergoes a series of steps:

1. The source code goes through the `javac` compiler and spits out *Intermediary Byte Code* which we do manually.
2. The byte code runs inside *Java Virtual Machines* (JVMs) which allows the application to run anywhere where there is a supported JVM available.

#### Package

*Java Archive* (JAR) is an archiver that compress and combine multiple `Java.class` files and dependent libraries & assets in a single package.

To create an archive:
```shell
jar cf MyApp.jar MyClass.class Service1.class Service2.class...
```

When executed, it creates a manifest file at `meta-inf/manifest.mf` that contains info and metadata about the packaged application.

```manifest
Manifest-Version: 1.0
Created-By: 1.8.0_242 (Private Build)
Main-Class: MyClass

```

The `Main-Class` specifies the entry point of our application.

When running a `jar` file, we use the command `java -jar MyApp.jar`.

#### Documentation

To create documentation on our code we use `javadoc`.

```shell
javadoc -d doc MyClass.java
```

`doc` is the file name of the documentation.

`-d` is the directory option saying that we are specifying where we will save the doc. In this case, inside current directory with the file name `doc`.

### Build Tools

Build tools are tools that use configuration files where we can specify the steps we want the build tool to automate.

Some Java build tools:
1. Maven
2. Gradle
3. ANT

## NodeJS
    
### Installation

Another option to install NodeJS is through NodeSource.

### NPM

*NPM* - Node Package Manager

`npm search <package>` - searches for a package

`node -e "console.log(module.paths)"` - shows all the paths NodeJS looks at for a package

NodeJS has two types of modules, **built-in modules** which are included when you install NodeJS runtime, and **external modules** which we need to install using NPM.

Application dependencies and scripts are located in `package.json`.
