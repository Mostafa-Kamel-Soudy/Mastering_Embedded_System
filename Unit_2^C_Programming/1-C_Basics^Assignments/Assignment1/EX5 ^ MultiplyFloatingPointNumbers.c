/*
 ======================================================================================================================
 Name        : FindASCIIValueOfCharacter.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : A C program that prompts the user to enter a character, finds its ASCII value, and prints the result using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char inputCharacter;

    printf("Enter a character: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%c", &inputCharacter);

    printf("ASCII Value of %c is %d\n", inputCharacter, inputCharacter);

    return 0;
}
