#include <stdio.h>
float income, rent, utilities, grocieries, transportation, savings, expenses, spend;

float input(char type[], float var){
printf("Monthly %s:\n", type);
scanf("%f", &var);
return var;
}

void percent(char type[], int amount){
    int per = amount/income*100;

    printf("your %s is %d%% of your income.\n", type, per);
}

int main(void){
    float prent, putilities, pgrocieries, ptransportation, psavings, pexpenses;
    printf("This is a budget calculator.\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    grocieries = input("groceries", grocieries);
    transportation = input("transportation", transportation);
    
    savings = income * .1; 
    expenses = rent + utilities + grocieries + transportation;
    spend = income - expenses - savings;
    printf("you make $ %.2f\n", income);
    printf ("your expenses are $ %.2f\n", expenses);
    printf("your savings are $ %.2f\n", savings);
    printf("your spending money is $ %.2f\n", spend);
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", grocieries);
    percent("transportation", transportation);
    return 0;
}