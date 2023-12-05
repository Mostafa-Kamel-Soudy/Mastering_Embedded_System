/*
 ======================================================================================================================
 Name        : Check whether a number even or odd.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Check whether a number even or odd using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	if((a%2) == 0)
		printf("%d is even\n",a);
	else
		printf("%d is odd\n",a);
	return 0;
}