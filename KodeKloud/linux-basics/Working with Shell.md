# Working With Shell

## Table of Contents

- [Introduction to Shell](#introduction-to-shell)
    - [Command Types](#command-types)
- [Basic Linux Commands](#basic-linux-commands)

## Introduction to Shell

When opening the shell, it is usually opened at `/home/$USER`. `/home/` is a system created directory that contains the home directory for almost all the users in the Linux system. It is usually denoted by the `~` in the terminal.

Anatomy of a command:

|Command:    |echo   |-n         |Hello   |
|------------|-------|-----------|--------|
|Description:|Command|Flag/Option|Argument|

### Command Types

1. Internal or Built-in Commands
    - Part of the shell
    - ~30 commands like, `cd, mkdir, pwd, echo, etc.`
2. External Commands
    - Binary programs/scripts that are located at distinct files in the system.
    - Preinstalled or can be installed by the user.

To determine if a command is internal or external, use `type <command>`.

## Basic Linux Commands

Can refer to [Linux Basics Notes](../devops-prerequisite/Linux%20Basics.md).

*Absolute path* is a path to a location of a file or directory that starts at the root.

*Relative path* is the path from the present working directory to the location.

`pushd` command puts the current working directory to a stack. The user can then go to any where on the system.

`popd` command pops the last pushed directory. If we pushed `/etc` and we are at `/var`, running `popd` command will bring us back to `/etc`.

**Pagers** allow viewing of files:
- `more` allows viewing of text files in a scrollable manner. It loads the whole file all at once.
    - `<SPC>` scrolls the display one screenful of data at a time.
    - `<ENTER>` scrolls the display one line.
    - `b` scrolls the display one screenful *backwards*.
    - `/` searches text.
    - `q` to exit
- `less` also allows viewing and navigating of files.
    - `<up arrow>` scrolls up the display one line
    - `<down arrow>` scrolls down the display one line.
    - `/` searches the output 

`ls` flags:
    - `-l` long list
    - `-a` show hidden files
    - `-lt` long list files in order created
    - `-ltr` long list files in the reverse order created

### Command Line Help

- `whatis <command>` shows a one line description of what a command does
- `man <command>` shows man pages that contain info on the command in detail
- `--h`/`--help` provide probable use case of a command
- `apropos <keyword>` search all the commands in the system and list it depending if the keyword is present in the command.

## Bash Shell

Bash shell features:
- Bash Auto-Completion
- Aliases with `alias <alias>=<command>`
- Command History with `history`

**Bash environment** variables store information about the user login session which is used by the shell. To see the current bash environment variables, we use `env`. We use `export` for setting environment variables.

To make environment variables persistent, we add it to our `~/.profile` or `~/.pam_environment`.

**Path variable** is the variable for all the locations of all possible external executable commands. To add to `PATH`, we use `export PATH=$PATH:<path_of_command>`.

