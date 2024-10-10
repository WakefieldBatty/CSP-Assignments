#include <stdio.h>


int main(void){
    char sibs[3][10] = {"Wakefield", "Jonas", "Millie"};
  
  for (int i = 0; i < 3; i++) 
  {
    printf("Hello %s\n", sibs[i]);
  }
    return 0;
}