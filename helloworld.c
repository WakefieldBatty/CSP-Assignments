#include <stdio.h>

void function(char name[100]){
printf("Hello %s\n", name);
}

int main(void){
    function("Wakefield");
    function("Dave");
    function("Pablo");
    function("Tina");
    function("Undadabrij");
    //Undadabrij is the name of one of my World of Warcraft characters. He is a Zandelari troll
    return 0;
}