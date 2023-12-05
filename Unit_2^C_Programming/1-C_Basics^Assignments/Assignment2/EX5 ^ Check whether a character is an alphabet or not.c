/*
 ==============================================================================================================================
 Name        : EX5 ^ Check whether a character is an alphabet or not.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/EX5 ^ Check whether a character is an alphabet or not using Ansi-style
 ===============================================================================================================================
 */

#include <stdio.h>

int main() {
    char character;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any previous newline character

    // Check if the character is an alphabet or not
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        printf("%c is an alphabet.\n", character);
    else
        printf("%c is not an alphabet.\n", character);

    return 0;
}
