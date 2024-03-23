# Linux Kernel

## Table of Contents

- [Linux Kernel Introduction](#linux-kernel-introduction)
- [Working with Hardware](#working-with-hardware)
- [Linux Boot Sequence](#linux-boot-sequence)
- [Runlevels](#runlevels)
- [File Types](#file-types)

## Linux Kernel Introduction

A *kernel* is the interface between the hardware and the computers processes and is responsible for four major tasks:

1. Memory Management
2. Process Management
3. Device Drivers
4. System Calls and Security

Analogy: The kernel is the librarian in the library, hardware are the books, and processes are the people using the books. The kernel manages all the processes that uses the computer hardware.

`uname` shows information about the kernel and with the `-r` flag shows the kernel version.

Within the Linux kernel, memory is divided into two areas:

1. **Kernel Space**
    - Portion of memory where the kernel provides and executes its services.
    - Contains the following:
        - Kernel Code
        - Kernel Extensions
        - Device Drivers
    - Putting it into analogy, the kernel space is the area within the library where the librarian/admin have access to.
2. **User Space**
    - Contains all the processes running outside the kernel.

All user programs function by manipulating data. They access the data by executing *system calls* to the kernel and the kernel allocates the required resources the application needs.

## Working with Hardware

High level overview of how hardware communicates with our system:

1. As soon as the device connects to a system, a USB for example, a *device driver* in the *kernel space* detects a state change in the machine and creates an event.
2. This event called the `uevent` is sent to the *user space* device manager daemon called `udev`.
3. The `udev` is responsible for dynamically creating a device node for the attached drive inside the `/dev` directory.
4. Once complete, the attached disk should be visible inside `/dev` directory.

For getting the details of a hardware component attached to the Linux system:

- `dmesg` is used to display messages from the ring buffer which also contains the logs from the hardware devices the kernel detects.
    - Can be used with `less` or `grep`. `dmseg | grep -i usb`
- `udevadm` is a management tool for `udev`.
    - `udevadm info` queries the `udev` database for device information.
        - Sample: `udevadm info --query=path --name=/dev/sda5` queries the hard disk attached to the system.
    - `udevadm monitor` listens to the kernel `uevents` and prints the details like device path and name on the screen.
- `lspci` stands for *list pci* and display information on all PCI devices connected to the system like ethernet cards, video cards, and all other devices that connects to the PCI port of the motherboard.
- `lsblk` lists information on block devices
- `lscpu` displays information on the CPU architecture
- `lsmem` displays information on available memory on the system. Use with `--summary` to print the summary.
- `free` shows total vs used memory in system. Flags `-m` for mb, `-k` in kb, and `-g` in gb.
- `lshw` displays information on the entire hardware config of the machine.

## Linux Boot Sequence

Boot sequence overview

BIOS POST &rarr; Boot Loader (GRUB2) &rarr; Kernel Initialization &rarr; INIT Process (systemd)

1. BIOS POST
    - *POST* stands for Power On Self Test
    - This stage ensures that the hardware attached to the device functions properly
2. Boot Loader
    - Loads the boot code and allows the user to choose an option on where to boot into.
    - Loads the kernel into memory and hands control to the kernel.
    - *GRUB2*: GRand Unified Bootloader Version 2
3. Kernel Initialization
    - Kernel is decompressed
    - Carries out kernel tasks
    - Once operational, the kernel looks for an `INIT` process to run which sets up the user space
4. INIT Process
    - Calls systemd daemon which is responsible for mounting file systems, starting and managing file systems
    - `systemd` reduces system startup time by parallelizing the startup of services
    - `ls -l /sbin/init` to check the INIT system used

## Runlevels

Runlevels set the mode of operation of a system. Running `runlevel` on the terminal shows the mode of operation of the system.

|Runlevel|Function        |Systemd Targets |
|--------|----------------|----------------|
|5       |Boots into a GUI|graphical.target|
|3       |Boots into a CLI|multiuser.target|

- `systemctl get-default` views the default target
    - looks up the file at `/etc/systemd/system/default.target`
- `systemctl set-default multi-user.target` to change the default target

## File Types

1. Regular Files
    - Contains text, data, or images.
2. Directories
3. Special Files
    1. Character Files
        - Corresponds to the files under the `/dev` file system that allows the OS to connect to the IO files
    2. Block Files
        - Represents block devices
    3. Links
        1. Hard Links
        2. Soft Links (Symbolic Links)
    4. Socket Files
        - Communication between two files
    5. Named Pipes
        - Connect one process as an input of another

Running `file <path/file>` displays the file type.

Another way is using the `ls` command with the `-l` flag. We can determine the file type by the 1st character in the output.

- `d`: directory
- `-`: regular file
- `c`: character file
- `l`: link file
- `s`: socket file
- `p`: pipe
- `b`: block device

## File System Hierarchy

- `/`: root
- `/home` is the home directory for all the users except the root user
- `/opt` is the area to store installed 3rd party programs
- `/mnt` area to mount file systems temporarily
- `/tmp` used to store temporary data
- `/media` area where all external media is mounted to like USB drives
    - `df -hP` prints details on all mounted file systems
- `/dev` contains the special block and character device files such as external hard disks, mouse, and keyboard
- `/bin` contains basic program and binary such as `mv` and `mkdir` to name a few
- `/etc` is used to store configuration files in Linux
- `/lib or /lib64` used to look for shared libraries into programs
- `/usr` location where all user applications and data reside like Mozilla
- `/var` is the location where the system writes data/logs
