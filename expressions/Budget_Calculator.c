#include <stdio.h>

int main(void){
    float income, rent, utilities, grocieries, transportation, savings, expenses, spend;
    float prent, putilities, pgrocieries, ptransportation, psavings, pexpenses;
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much do your utilities cost?\n");
    scanf("%f", &utilities);
    printf("How much do your grocieries cost?\n");
    scanf("%f", &grocieries);
    printf("How much do your transportation cost?\n");
    scanf("%f", &transportation);
    savings = income * .2; 
    expenses = rent + utilities + grocieries + transportation;
    spend = income - expenses - savings;
    printf("you make $ %.2f\n", income);
    printf ("your expenses are $ %.2f\n", expenses);
    printf("your savings are $ %.2f\n", savings);
    printf("your spending money is $ %.2f\n", spend);
    prent = rent / income * 100;
    putilities = utilities / income * 100;
    pgrocieries = grocieries / income * 100;
    ptransportation = transportation / income * 100;
     psavings = savings / income * 100;
     pexpenses = expenses / income * 100;
     printf(" your rent is %d%% of your income.\n", (int) prent);
      printf(" your rent is %d%% of your income.\n", (int) putilities);
       printf(" your rent is %d%% of your income.\n", (int) pgrocieries);
        printf(" your rent is %d%% of your income.\n", (int) ptransportation);
         printf(" your rent is %d%% of your income.\n", (int) psavings);
          printf(" your rent is %d%% of your income.\n", (int) pexpenses);
    return 0;
}