/*
 ======================================================================================================================
 Name        : EX6 ^ Calculate sum of natural numbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment2/EX6 ^ Calculate sum of natural numbers using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input a positive integer from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers up to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the calculated sum
    printf("Sum = %d\n", sum);

    return 0;
}
