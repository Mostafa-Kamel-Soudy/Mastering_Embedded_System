/*
 ======================================================================================================================
 Name        : EX8 ^ Make a simple calculator using switch.c
 Author      : Mostafa Kamel
 Created on  : Dec 5, 2023
 Description : Unit_2_C^Programming/C_Basics^Assignments/Assignment2/EX8 ^ Make a simple calculator using switch using Ansi-style
 ======================================================================================================================
 */

#include <stdio.h>

int main() {
    char operator;
    double operand1, operand2, result;

    // Input the operator from the user
    printf("Enter operator either + or - or * or /: ");
    scanf(" %c", &operator);  // Note the space before %c to consume any previous newline character

    // Input two operands from the user
    printf("Enter two operands: ");
    scanf("%lf %lf", &operand1, &operand2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error! Invalid operator entered.\n");
            return 1;  // Exit the program with an error code
    }

    // Display the result
    printf("%.2lf %c %.2lf = %.2lf\n", operand1, operator, operand2, result);

    return 0;
}
