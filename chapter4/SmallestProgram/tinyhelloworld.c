// File Name: tinyhelloworld.c
// Author: jacky
// Created Time: Sat 14 Sep 2019 03:55:55 PM UTC

char* str = "Hello World!\n";

void print()
{
    asm( "movl $13, %%edx \n\t"
         "movl %0,  %%ecx \n\t"
         "movl $0,  %%ebx \n\t"
         "movl $4,  %%eax \n\t"
         "int  $0x80      \n\t"
         ::"r"(str) : "edx", "ecx", "ebx"
       );
}

void exit()
{
    asm( "movl $42, %ebx  \n\t"
         "movl $1,  %eax  \n\t"
         "int $0x80       \n\t"
       );
}

void nomain()
{
    print();
    exit();
}
