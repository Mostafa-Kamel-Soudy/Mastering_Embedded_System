/*
 ======================================================================================================================
 Name        : EX3 ^ Add Two Integers.c
 Author      : Mostafa Kamel
 Created on  : Dec 1, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment1/EX3 ^ Add Two Integers using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,sum;
	printf("Enter two integers: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("Sum: %d",sum);
	return 0;
}