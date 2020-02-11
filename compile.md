# Borked install usage

> Remember to clean if experiencing issues with building

1. Compile in ubuntu container:
`sudo docker run -it -v ~/aau/dat04/pss/xv6-public:/root/xv6-public ubuntu bash`
1. Install buildtools:
`gcc make`
1. Compile xv6:
`make xv6.img fs.img`


Alternatively build a Docker image with these dependencies, and tag it something sensible such as 'xv6-build' and simply run `build.sh` to run xv6.

Use `ctrl+a c` and then `q` to exit QEMU.
