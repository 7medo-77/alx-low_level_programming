#!/bin/bash
gcc -c *.c all.o
gcc -shared *.o liball.so
