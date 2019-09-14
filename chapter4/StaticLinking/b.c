// File Name: b.c
// Author: jacky
// Created Time: Sat 14 Sep 2019 08:07:44 AM UTC

int shared = 1;

void swap(int* a, int* b)
{
    *a ^= *b ^= *a ^= *b;
}
