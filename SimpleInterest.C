/*
AUTHOR:Ann Mwende David
REG NO:D33-0234-2022
Program To Find Area Of a Rectangle
DATE:20th Feb 2025
*/
#include <stdio.h> //printf(), scanf()

int main() {
    int principal, time, rate, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    printf("Enter the rate of interest (per annum): ");
    scanf("%d", &rate);

    simple_interest = (principal * time * rate) / 100;

    printf("The Simple Interest is: %d\n", simple_interest);

    return 0; //excusion successful
}
