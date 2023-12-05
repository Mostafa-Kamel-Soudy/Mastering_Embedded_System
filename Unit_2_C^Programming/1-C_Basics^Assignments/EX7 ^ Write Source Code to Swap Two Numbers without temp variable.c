/*
 =================================================================================================================================================
 Name        : EX7 ^ Write Source Code to Swap Two Numbers without temp variable.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/EX7 ^ Write Source Code to Swap Two Numbers without temp variable using Ansi-style
 ==================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b;
	printf("Enter a value of a: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	printf("Enter a value of b: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, Value of a: %.2f\n",a);
	printf("After swapping, Value of b: %.2f\n",b);

	return 0;
}