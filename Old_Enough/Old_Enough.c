#include <stdio.h>
int age = 21;
int main(void){
    if (age >= 18){
        printf("You're old enough to vote!");
    } else if (age >= 16){
        printf("You're old enough to drive!");
    } else if (age >= 15){
        printf("You're old enough to get your learners permit!");
    } else if (age >= 5){
        printf("You're old enough to go to school!");
    }
    return 0;
}