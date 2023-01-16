#!/bin/bash
wget -P /tmp/ https://raw.github.com/girmesh03/alx-low_level_programming/master/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/101-make_me_win.sh
