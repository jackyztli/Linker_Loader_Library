#!/bin/bash
# Author: jacky
# Created Time: Sat 07 Sep 2019 06:20:08 PM UTC
gcc -E main.c -o main.i
gcc -E a.c    -o a.i
gcc -S main.i -o main.s
gcc -S a.i    -o a.s
as     main.s -o main.o
as     a.s    -o a.o
ld -static /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/7.4.0/crtbeginT.o -L/usr/lib/gcc/x86_64-linux-gnu/7.4.0/ -L/usr/lib -L/lib main.o a.o --start-group -lgcc -lgcc_eh -lc --end-group /usr/lib/gcc/x86_64-linux-gnu/7.4.0/crtend.o /usr/lib/x86_64-linux-gnu/crtn.o
