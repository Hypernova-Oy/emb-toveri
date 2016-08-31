# Release of a new Debian package

### Update module version and changelog

* Update version numbers in modules
```
$ $EDITOR lib/<your-module-name>.pm
```

* Update changelog (copy&paste the previous log and modify it) Most
   important part is to change the version number (this will be used
   by debuild).


```
$ $EDITOR debian/changelog
```

Here's an example log entry:
```
libemb-buzzer-perl (0.02-1) UNRELEASED; urgency=low

  * Release fixes package's name.


-- Joonas Kylmälä <example@localhost> Thu, 25 Aug 2016 12:00:00 +0000

```

Scroll down to the end of this document (Release on Github) for
learning how to create the version number.

* Push your changes to Github
```
$ git push
```

### Make .deb binary

The following commands will show you how to generate .deb archive.

Dependencies: debuild program, which you can get with

```
$ sudo apt install devscripts
```

Packaging:

```
$ git clone https://github.com/KohaSuomi/<repository-name>

# For emb-* repos you do like this (X.XX = program version):
$ tar -zcvf lib<repository-name>-perl_X.XX.orig.tar.gz <repository-name>

# For example: tar -zcvf libemb-gpio-perl_0.01.orig.tar.gz emb-gpio

# Make the package:
$ cd <repository-name> && debuild -uc -us
# Then install any dependencies debuild says and rerun debuild -uc -us

# Or alternatively if you're packaging SSAuthenticator
$ git clone https://github.com/KohaSuomi/SSAuthenticator

tar -zcvf authenticator_0.10.orig.tar.gz SSAuthenticator

# Make the package and also do the installation of dependencies if required:
$ cd SSAuthenticator && debuild -uc -us
```

After running debuild the generated .deb package is one directory up.

### Release on Github

Now that the package is generated you can create in Github a new
release. In the repository's Github page click on the releases link
and draft a new release.

Use format vX.XX-Y for the release tag where X.XX is the module's
version number and Y is the version of of files under debian/. The Y
will be always in a whole new release 1. If you change only the files
under debian/ in that release then just bumb the Y number by one.

Finally attach the newly generated .deb binary to the release.
