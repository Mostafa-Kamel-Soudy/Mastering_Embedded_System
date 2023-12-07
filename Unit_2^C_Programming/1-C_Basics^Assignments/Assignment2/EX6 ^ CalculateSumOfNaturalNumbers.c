/*
 ======================================================================================================================
 Name        : CalculateSumOfNaturalNumbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter a positive integer, calculates the sum of natural numbers up to that integer, and prints the result using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>

int main() {
    int userInput, sum = 0;

    // Input a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &userInput);

    // Calculate the sum of natural numbers up to userInput
    for (int i = 1; i <= userInput; i++) {
        sum += i;
    }

    // Display the calculated sum
    printf("Sum = %d\n", sum);

    return 0;
}
