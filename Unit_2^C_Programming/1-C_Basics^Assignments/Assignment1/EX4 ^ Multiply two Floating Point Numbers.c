/*
 ======================================================================================================================
 Name        : MultiplyFloatingPointNumbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : A C program that prompts the user to enter two floating-point numbers, multiplies them, and prints the product using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float firstNumber, secondNumber, product;

    printf("Enter two floating-point numbers: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%f %f", &firstNumber, &secondNumber);

    product = firstNumber * secondNumber;

    printf("Product: %f\n", product);

    return 0;
}
