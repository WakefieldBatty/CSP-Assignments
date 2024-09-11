#include <stdio.h>

int main(void){
    char add[100];
    printf(" Please give me your name: \n");
    fgets(add, sizeof(add), stdin);
    printf(" Welcome %s\n", add);
    float num = (int) pow(4,3)*4/2;
    printf("%d", num);
    return 0;
}