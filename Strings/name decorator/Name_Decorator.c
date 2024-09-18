#include <stdio.h>
#include <string.h>


int main(void){
    char name[100];
    char a[100] = ">:]]]";
    char b[100] = "[[[:<";
    printf("What is your name?: \n");
    scanf("%s", name);
    strcat(a, name);
    strcat(a, b);
    printf(a);
    return 0;
}