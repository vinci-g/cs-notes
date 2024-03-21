# Security

## Table of Contents

## TLS Certficates

Ensure communication between the user and the server is encrypted and trusted.

**Symmetric encryption** is a type of encryption that uses the same key to encrypt and decrypt a data and is passed between the sender and the reciever.
**Asymmetric encryption** uses a *private key* and a *public key (or lock)* 

For SSH, we generate a pair of public and private keys using:

```shell
ssh-keygen -t <type of key>
```

Type of keys consist of `ed25519`, `rsa`, `dsa`, `ecdsa`.

For OpenSSL that is used for SSL/TLS protocols:

```shell
openssl genrsa -out my-bank.key 1024
```

The command generates a 1024 bit RSA key and writes it to a file called `private.key`.

```shell
openssl rsa -in private.key -pubout > p
```
