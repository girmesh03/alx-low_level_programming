#!/bin/bash
wget -P /$PWD/ https://raw.github.com/girmesh03/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/$PWD/nrandom.so
