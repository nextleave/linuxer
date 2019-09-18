#include <stdio.h>
#include <zconf.h>

int main(int arg, char* argv[]) {
    pid_t pid = fork();
    if (pid == 0) {
//        printf("child process is run, pid is: %s", getpid());
    } else if (pid > 0) {
//        printf("parent process is run, pid is: %s", getpid());
    } else if (pid < 0) {
//        printf("create child process failed");
    }

    if (pid > 0) {
        printf("child process end, pid is %s", getpid());
    } else {
        sleep(5);
        printf("parent process end, pid is %s", getpid());
    }
    return 0;
}