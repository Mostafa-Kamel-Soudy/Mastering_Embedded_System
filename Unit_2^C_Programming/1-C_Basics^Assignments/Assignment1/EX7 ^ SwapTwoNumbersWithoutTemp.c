/*
 =================================================================================================================================================
 Name        : SwapTwoNumbersWithoutTemp.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : A C program that prompts the user to enter two numbers, swaps them without using a temporary variable, and prints the swapped values using Ansi-style.
 ==================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;

    printf("Enter the value of num1: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%f", &num1);

    printf("Enter the value of num2: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%f", &num2);

    // Swapping without temp variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping, Value of num1: %.2f\n", num1);
    printf("After swapping, Value of num2: %.2f\n", num2);

    return 0;
}
