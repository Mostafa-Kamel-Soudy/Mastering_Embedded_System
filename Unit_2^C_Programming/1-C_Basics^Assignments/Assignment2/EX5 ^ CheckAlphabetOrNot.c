/*
 ==============================================================================================================================
 Name        : CheckAlphabetOrNot.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter a character, checks if it's an alphabet or not, and prints the result using Ansi-style.
 ===============================================================================================================================
 */

#include <stdio.h>

int main() {
    char inputCharacter;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &inputCharacter);  // Note the space before %c to consume any previous newline character

    // Check if the character is an alphabet or not
    if ((inputCharacter >= 'a' && inputCharacter <= 'z') || (inputCharacter >= 'A' && inputCharacter <= 'Z'))
        printf("%c is an alphabet.\n", inputCharacter);
    else
        printf("%c is not an alphabet.\n", inputCharacter);

    return 0;
}
