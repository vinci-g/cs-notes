# Security

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

The command above generates a 1024 bit RSA key and writes it to a file called `my-bank.key`.

```shell
openssl rsa -in my-bank.key -pubout > my-bank.pem
```

The command above generates a public key at `my-bank.pem`.

To ensure that certificates are secure, it should be approved and validated by a *Certficate Authority*.

Public keys normally have the `.crt` or `.pem` extension and private keys usually have `.key` or `*-key.pem` extensionprivate.
