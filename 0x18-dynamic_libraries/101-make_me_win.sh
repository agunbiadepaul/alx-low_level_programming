#!/bin/bash
wget -p .. https://raw.githubusercontent.com/agunbiadepaul/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libhack.so"
