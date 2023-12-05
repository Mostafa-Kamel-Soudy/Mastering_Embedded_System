/*
 ===========================================================================================================================
 Name        : EX4 ^ Check whether number is positive or negative.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment2/EX4 ^ Check whether number is positive or negative using Ansi-style
 ============================================================================================================================
 */

#include <stdio.h>

int main() {
    double number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0)
        printf("%.2lf is positive.\n", number);
    else if (number < 0)
        printf("%.2lf is negative.\n", number);
    else
        printf("You entered zero.\n");

    return 0;
}