#include <stdio.h>
#include <string.h>

int main(void){
char animal[20];
char place[20];
char verb[20];
char sentence[400] = "The ";
    printf("Name an animal: \n");
    scanf("%s", animal);
    printf("Name a place: \n");
    scanf("%s", place);
    printf("Name a verb: \n");
    scanf("%s", verb);
    strcat(sentence, animal);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " and did ");
    strcat(sentence, verb);
    strcat(sentence, " with his friend the angry turtle.\n");
    printf("%s", sentence);
    return 0;
}