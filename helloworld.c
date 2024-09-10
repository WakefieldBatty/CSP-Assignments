#include <stdio.h>

int main(void){
    char add[100];
    printf(" Please give me your name: \n");
    fgets(add, sizeof(add), stdin);
    printf(" Welcome %s\n", add);
    return 0;
}