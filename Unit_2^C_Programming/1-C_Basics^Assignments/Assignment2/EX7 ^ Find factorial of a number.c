/*
 ======================================================================================================================
 Name        : EX7 ^ Find factorial of a number.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment2/EX7 ^ Find factorial of a number using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>

long long factorial(int n);

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error !!! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial = %lld\n", factorial(num));
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
