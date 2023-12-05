/*
 ======================================================================================================================
 Name        : EX2 ^ Print(Integer Entered by a User).c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/EX2 ^ Print(Integer Entered by a User) using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("Enter an integer: ");
        fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("You entered %d",x);
	return 0;
}