/*
 ===========================================================================================================================
 Name        : CheckPositiveOrNegative.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter a number, checks if it's positive, negative, or zero, and prints the result using Ansi-style.
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
