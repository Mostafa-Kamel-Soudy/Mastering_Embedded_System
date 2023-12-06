/*
 ======================================================================================================================
 Name        : AddTwoIntegers.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : A C program that prompts the user to enter two integers, adds them, and prints the sum using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstInteger, secondInteger, sum;

    printf("Enter two integers: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%d %d", &firstInteger, &secondInteger);

    sum = firstInteger + secondInteger;

    printf("Sum: %d\n", sum);

    return 0;
}
