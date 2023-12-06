/*
 ======================================================================================================================
 Name        : CheckVowelOrConsonant.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter an alphabet, checks whether it's a vowel or consonant, and prints the result using Ansi-style.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char userInput;

    printf("Enter an alphabet: ");
    fflush(stdout);  // Flush the output buffer
    fflush(stdin);   // Flush the input buffer
    scanf("%c", &userInput);

    if (userInput == 'A' || userInput == 'a' || userInput == 'E' || userInput == 'e' ||
        userInput == 'I' || userInput == 'i' || userInput == 'O' || userInput == 'o' ||
        userInput == 'U' || userInput == 'u') {
        printf("%c is a vowel\n", userInput);
    } else {
        printf("%c is a consonant\n", userInput);
    }

    return 0;
}
