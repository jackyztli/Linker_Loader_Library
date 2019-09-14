// File Name: a.c
// Author: jacky
// Created Time: Sat 14 Sep 2019 08:06:58 AM UTC

extern int shared;

int main(int argc,char** argv)
{
    int a = 100;
    swap(&a, &shared);
    return 0 ;
}
