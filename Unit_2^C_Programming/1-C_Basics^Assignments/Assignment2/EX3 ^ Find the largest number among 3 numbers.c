/*
 =============================================================================================================================
 Name        : EX3 ^ Find the largest number among 3 numbers.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment2/EX3 ^ Find the largest number among 3 numbers using Ansi-style
 =============================================================================================================================
 */

#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Compare the numbers to find the largest one
    if (num1 >= num2 && num1 >= num3)
        printf("Largest number = %.2lf\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Largest number = %.2lf\n", num2);
    else
        printf("Largest number = %.2lf\n", num3);

    return 0;
}