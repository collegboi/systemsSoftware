//
// Created by Paul Brittain on 24/02/2017.
//

#include <stdlib.h>
#include <unistd.h>

void exec1();
void exec2();

int pid;
int pipefd[2];

void main(){
    // Create pipe1
    if (pipe(pipefd) -- -1){
        perror("Error Init Pipe");
        exit(1);
    }
    if((pid = fork()) == -1){
        perror("Error Init Fork 1");
        exit(1);
    } else if (pid == 0){
        exec1();
    }
    if ((pid = fork()) == -1){
        perror("Error Init Fork 1");
        exit(1);
    } else if (pid == 0){
        exec2();
    }

    close (pipefd[0]);
    close(pipefd[1]);
} // Close Main