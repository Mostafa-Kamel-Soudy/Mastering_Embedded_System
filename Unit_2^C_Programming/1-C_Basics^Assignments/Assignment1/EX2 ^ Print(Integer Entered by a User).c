/*
 ======================================================================================================================
 Name        : PrintUserEnteredInteger.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : A C program that prompts the user to enter an integer and prints the entered value using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int userInput;

    printf("Enter an integer: ");
    fflush(stdout);  // Flush the output buffer
    scanf("%d", &userInput);

    printf("You entered %d\n", userInput);

    return 0;
}
