/*
    María Isabel Ortiz
    Laboratorio 1 
    Sistemas Operativos
    Programa 2
*/
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int f;
    f = fork();

if (f == 0){
        execlp("/bin/ls","ls", "-R", "/sbin", NULL);
        return 1;
} else if (f == 1){
    execlp("/bin/ls","ls", "-R", "/sbin", NULL);
} else {
    int f;
    for (f = 0; f < 10; f++){
        printf("\nFunciona\n");
        }
        wait(NULL);
        printf("%d\n", (int)getpid());
    }
    return 0;
}