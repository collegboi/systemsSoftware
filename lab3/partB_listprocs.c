//
// Created by Paul Brittain on 10/02/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // fork
#include <sys/types.h> // pid
#include <sys/wait.h> // wait
#include <string.h>

int main( int argc, char **argv )  {


    // List all the processes running on a system if no params are
    // passed via the command line.
    if (argc == 1) {

        char* args[] = {"ps", "aux", NULL};
        execv("/bin/ps",args);

    // Search for a process by name eg. ./myprog search calculator
    } else if ( 0 == strcmp(argv[1], "find") )  {

        printf("Finding... %s\n", argv[2]);
        char* args[] = {"pgrep", argv[2], NULL};
        execv("/usr/bin/pgrep", args);

    // Kill a process for a given IPD rg. ./myprog kill 1292
    } else if ( 0 == strcmp(argv[1], "kill")) {

        printf("Killing... %s\n",argv[2]);
        char* args[] = {"kill", argv[2], NULL};
        execv("/bin/kill", args);
    }

    return 0;
}