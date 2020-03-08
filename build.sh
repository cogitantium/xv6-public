#!/bin/bash

# build image - FIXME: remember to change paths if you're not me
sudo docker run -it -v ~/aau/dat04/pss/xv6-public:/root/xv6-public -w /root/xv6-public/ xv6-build make xv6.img fs.img

# fix permissions
sudo chmod a+rwx xv6.img fs.img

# run xv6.img
exec make qemu-nox
