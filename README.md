About
stderred hooks on write() and a family of stream functions (fwrite, fprintf, error...) from libc in order to colorize all stderr output that goes to terminal thus making it distinguishable from stdout. Basically it wraps text that goes to file with descriptor "2" with proper ANSI escape codes making text red.

It's implemented as a shared library and doesn't require recompilation of existing binaries thanks to preload/insert feature of dynamic linkers.

It's supported on Linux (with LD_PRELOAD), FreeBSD (also LD_PRELOAD) and OSX (with DYLD_INSERT_LIBRARIES).

Watch this intro asciicast to see it in action.

Installation
Clone this repository:

$ git clone git://github.com/sickill/stderred.git
$ cd stderred
Important: In all cases below make sure that path to libstderred.so is absolute!

Linux and FreeBSD
Make sure you have cmake and the gcc toolchain required for compilation installed:

# Ubuntu
sudo apt-get install build-essential cmake

# Fedora
sudo yum install make cmake gcc gcc-c++
