/*
 ======================================================================================================================
 Name        : FindFactorialOfNumber.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter an integer, calculates and prints the factorial using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>

long long factorial(int n);

int main() {
    int userInput;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &userInput);

    // Check if the number is non-negative
    if (userInput < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial = %lld\n", factorial(userInput));
    }

    return 0;
}

long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: factorial(n) = n * factorial(n-1)
        return n * factorial(n - 1);
    }
}
