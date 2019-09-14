// File Name: simplesymbol.c
// Author: jacky
// Created Time: Fri 13 Sep 2019 01:55:16 PM UTC

#include <stdio.h>

extern char __executable_start[];
extern char etext[], _etext[], __etext[];
extern char edata[], _edata[];
extern char end[], _end[];
int main(int argc,char** argv)
{
    printf("Executable Start %X\n", __executable_start);
    printf("Text End %X %X %X\n", etext, _etext, __etext);
    printf("Data End %X %X %X\n", edata, _edata);
    printf("Executable End %X %X\n", end, _end);

    return 0 ;
}
