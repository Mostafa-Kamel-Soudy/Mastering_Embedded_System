/*
 ======================================================================================================================
 Name        : EX2 ^ Check vowel or constant.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/EX2 ^ Check vowel or constant using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
		printf("%c is vowel\n",c);
	else
		printf("%c is constant\n",c);	
        return 0;
}