#!/bin/bash
cp ~/alx-low_level_programming/0x09-static_libraries/*.c ; cp ~/alx-low_level_programming/0x09-static_libraries/*.h ./ ; gcc -c -fPIC *.c ; gcc -shared *.o -o libdynamic.so
