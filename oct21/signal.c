#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define TRUE 1
sigset_t mask;
int count=0;

void sigIntHandler(int sigNum);

int main(int argc, char *argv[]){
    signal(SIGINT, sigIntHandler);

    sigemptyset(&mask);
    sigaddset(&mask, SIGINT);
    sigprocmask(SIG_BLOCK, &mask, NULL);

    while(TRUE){
        printf("Press Crtl-C to generate SIGINT %d\n", count);
        sleep(3);
        if(count > 10){
            sigprocmask(SIG_UNBLOCK, &mask, NULL);
        }
        count++;
    }
}

void sigIntHandler(int sigNum){
    printf("SIGINT Received... \n");
}

//when running shell, control C should kill the programs inside shell, not the shell itself