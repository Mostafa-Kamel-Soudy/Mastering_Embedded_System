/*
 ======================================================================================================================
 Name        : EX4 ^ Multiply two Floating Point Numbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment1/EX4 ^ Multiply two Floating Point Numbers using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y,mul;
	printf("Enter two integers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&x,&y);
	mul = x*y;
	printf("Product: %f",mul);
	return 0;
}