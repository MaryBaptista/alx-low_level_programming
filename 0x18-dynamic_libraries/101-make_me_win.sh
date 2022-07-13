#!/bin/bash
wget -P /tmp https://github.com/MaryBaptista/alx-low_level_programming/blob/main/0x18-dynamic_libraries/library.so
export LD_PRELOAD=/tmp/library.so
