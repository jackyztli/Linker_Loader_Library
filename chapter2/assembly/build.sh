#!/bin/bash
# Author: jacky
# Created Time: Sat 07 Sep 2019 06:20:08 PM UTC
gcc -E main.c -o main.i
gcc -S main.i -o main.s
as main.s     -o main.o
