/*
 ======================================================================================================================
 Name        : CheckEvenOrOdd.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter an integer, checks whether it's even or odd, and prints the result using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int userInput;

    printf("Enter an integer to check: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%d", &userInput);

    if (userInput % 2 == 0) {
        printf("%d is even\n", userInput);
    } else {
        printf("%d is odd\n", userInput);
    }

    return 0;
}
