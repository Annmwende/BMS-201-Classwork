/*
AUTHOR:Ann Mwende David
REG NO:D33-0234-2022
Program To Find Area Of a Rectangle
DATE:20th Feb 2025
*/
#include <stdio.h> // printf(), scanf()

int main() {
    // Variable declaration and initilization
    int length, width, area;

    printf("Program to find the area of a rectangle:\n");

    printf("Enter the length: \n");
    scanf("%d", &length);

    printf("Enter the width: \n");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d\n", area);

    return 0; // Execution successful
}
