// File Name: simplesection.c
// Author: jacky
// Created Time: Sun 08 Sep 2019 04:25:41 PM UTC

#include <stdio.h>

int printf(const char* format, ...);

int global_init_var = 84;
int global_uninit_var;

void func1(int i)
{
    printf("%d\n", i);
}

int main(int argc,char** argv)
{
    static int static_var = 85;
    static int static_var2;

    int a = 1;
    int b;

    func1(static_var * static_var2 + a + b);
    return 0 ;
}
