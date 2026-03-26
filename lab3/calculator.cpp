#include <stdio.h>

int main() {
    char operator ;
    double num1, num2, result;
    
    printf("SIMPLE CALCULATOR\n");
    printf("-----------------\n");
    
    // Taking the inputs
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Error! Invalid input for first number.\n");
        return 1;
    }
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Error! Invalid input for second number.\n");
        return 1;
    }
    
    // Operation using switch-case for calculator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("\nError! Invalid operator.\n");
            printf("Please use +, -, *, or /.\n");
    }
    
    return 0;
}
