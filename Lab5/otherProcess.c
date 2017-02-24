//
// Created by Paul Brittain on 24/02/2017.
//

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_BUF 1024

int main(){
    int fd;
    char * fifoFile = "/Users/paulbrittain/CLionProjects/systemssoftware/Lab5";
    char buf[MAX_BUF];

    fd = open(fifoFile, O_RDONLY);
    read(fd, buf, MAX_BUF);
    printf("Message in: %s\n", buf);
    close(fd);

    return 0;
}

