#include <stdio.h>

int main(void){
    char fname[] = "Wakefield";
    char lname[] = " Batty";
    char prefix[] = "Mr.";
    char fullName[] = (prefix, fname);
    printf("%s\n", prefix);
    strcat(prefix, lname);
    printf("%s\n", prefix);
    return 0;
}