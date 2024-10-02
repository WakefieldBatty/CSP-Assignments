#include <stdio.h>
#include <time.h>

int hour;

int main (void)
{
 time_t rawtime;
 struct tm * timeinfo;

time(&rawtime);
timeinfo = localtime (&rawtime);
printf("Current local time and date: %s", asctime(timeinfo));
printf("Tell me the hour in military time:\n");
scanf("%d", &hour);
if (hour < 12){
    printf("Good morning\n");
}else if (hour < 18){
    printf("Good afternoon\n");
}else if (hour < 21){
    printf("Good evening\n");
}else {
    printf("Why are you even up using this code this late?\n");
}
 return 0;
}