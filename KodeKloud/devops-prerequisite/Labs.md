# Labs

Setting a local lab can help with practicing own custom solutions.

We can a setup a lab using our local machine or using the cloud.

## Virtualization Softwares

1. Type 1
	- Installed on bare metal
	- Used on enterprises and production environment where large production of VMs are required
2. Type 2
	- Run on existing OS
	- VirtualBox and VMWare are examples of Type 2 virtualization softwares

## Vagrant

Vagrant helps us in setting up a VM by downloading, creating a VM, creating networks, configure networking, configure port forwarding, and booting up a VM.

Basic commands:

- `vagrant init <os>` to install and initialize a VM with default settings
- `vagrant up` to activate/start the VM
- `vagrant ssh` to connect to the VM

The `Vagrantfile` is used to configure the VM. More on it and its usage on the offical documentation.
