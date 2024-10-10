#include <stdio.h>
int i;
int usr;
int main(void){
    printf("Give me a number: ");
    scanf("%d", &usr);
    //loop that counts to 50
    for(i=1;i<=usr;i++){
        //replace #'s divisible by 3 and 5 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        }else if (i%3==0){

            //replace #'s divisible by 3 with "Fizz"
            printf("Fizz\n");
            //replace #'s divisible by 5 with "Buzz"
        }else if(i%5==0){
                printf("Buzz\n");
    
        //print the number
        }else {
        printf("%d\n", i);
        }
    }
    
    return 0;
}