// File Name: minibash.c
// Author: jacky
// Created Time: Sun 15 Sep 2019 07:32:41 AM UTC

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char** argv)
{
    char buf[1024] = { 0 };
    pid_t pid;
    while (1) {
        printf("minibash $");
        scanf("%s", buf);
        pid = fork();
        if (pid == 0) {
            if (execlp(buf, 0) < 0) {
                printf("exec error\n");
            }
        } else if (pid > 0) {
            int status;
            waitpid(pid, &status, 0);
        } else {
            printf("fork error %d\n", pid);
        }
    }
    return 0 ;
}
