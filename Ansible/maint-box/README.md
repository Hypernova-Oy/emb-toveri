# maint-box

A simple Raspberry box to be taken with on an installation trip.

A remote connection to the box should be prepared from the central controller.
Then the box has all the tools to locally modify the Toveri SD-card/USB-drive.

- reconfigure network
- reset root password
- etc...

Also the box operates as a DHCP server, so it can be plugged directly into another Raspberry Pi with DHCP and ssh'd over.

# DHCP server

Uses

    isc-dhcp-server

Script based on https://blog.monotok.org/setup-raspberry-pi-dhcp-server/

Check DHCP leases with

    cat /var/lib/dhcp/dhcpd.leases

# DHCP server instructions summary

$ sudo apt-get install isc-dhcp-server

$ sudo nano /etc/dhcpcd.conf
```
# Example static IP configuration:
interface eth0
static ip_address=192.168.0.10/24
```

$ sudo nano /etc/resolv.conf
```
domain lan
```

$ sudo nano /etc/default/isc-dhcp-server
```
INTERFACES="eth0"
```

$ sudo nano /etc/dhcp/dhcpd.conf
```
# option definitions common to all supported networks...
option domain-name "lan";

# If this DHCP server is the official DHCP server for the local
# network, the authoritative directive should be un-commented.
authoritative;

# This is a very basic subnet declaration.
subnet 192.168.0.0 netmask 255.255.255.224 {
  range 192.168.0.11 192.168.0.20;
}
```
