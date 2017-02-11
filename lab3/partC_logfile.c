//
// Created by Paul Brittain on 10/02/2017.
//

#include <syslog.h>
#include <stdio.h>

void loggingFunction(void){
    openlog("log", option, priority);
    syslog (LOG_INFO, "invocation message");
    closelog();
}

