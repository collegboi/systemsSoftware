//
// Created by Paul Brittain on 24/02/2017.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int fd[2], nbytes;
    pid_t pid;
    char string[] = "Howya friend!!!\n";
    char readbuffer[100];

    // Create the pipe
    pipe(fd);

    // Create the child process
    pid = fork();

    if(pid == 0){
        // Take no input, close fd[0]
        close(fd[0]);

        // Send output to parent via write
        write(fd[1], string, (strlen(string)+1));
        exit(0);
    }
    else {
        // Send no output, close fd[1]
        close(fd[1]);

        // Get input from the pipe via read
        nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
        printf("Message form child: %s", readbuffer);
    }
}