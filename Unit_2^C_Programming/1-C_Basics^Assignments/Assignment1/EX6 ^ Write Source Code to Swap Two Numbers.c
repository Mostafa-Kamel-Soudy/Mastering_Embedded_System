/*
 ======================================================================================================================
 Name        : EX6 ^ Write Source Code to Swap Two Numbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment1/EX6 ^ Write Source Code to Swap Two Numbers using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b,temp;
	printf("Enter a value of a: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	printf("Enter a value of b: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, Value of a: %.2f\n",a);
	printf("After swapping, Value of b: %.2f\n",b);

	return 0;
}