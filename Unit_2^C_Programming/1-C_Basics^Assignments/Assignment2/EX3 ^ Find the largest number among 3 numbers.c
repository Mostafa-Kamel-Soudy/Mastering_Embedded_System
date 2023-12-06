/*
 =============================================================================================================================
 Name        : FindLargestNumber.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : A C program that prompts the user to enter three numbers, compares them, and prints the largest one using Ansi-style.
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
