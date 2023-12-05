/*
 ======================================================================================================================
 Name        : EX5 ^ Find ASCII Value of a Character.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment1/EX5 ^ Find ASCII Value of a Character using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	printf("ASCII Value of %c is %d",c,c);
	return 0;
}