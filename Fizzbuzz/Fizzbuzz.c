#include <stdio.h>
#include <stdio.h>
int i;
int usr;
char one[10000];
char two[10000];
char three[10000];
int main(void){
    printf("Give me a number: ");
    scanf("%d", &usr);
    printf("Give me a short word: ");
    scanf("%s", &one);
    printf("Give me another short word: ");
    scanf("%s", &two);
    strcat(three, one);
    strcat(three, two);
    //loop that counts to 50
    for(i=1;i<=usr;i++){
        //replace #'s divisible by 3 and 5 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            printf("%s\n", three);

        }else if (i%3==0){

            //replace #'s divisible by 3 with "Fizz"
            printf("%s\n", one);
            //replace #'s divisible by 5 with "Buzz"
        }else if(i%5==0){
                printf("%s\n", two);
    
        //print the number
        }else {
        printf("%d\n", i);
        }
    }
    
    return 0;
}