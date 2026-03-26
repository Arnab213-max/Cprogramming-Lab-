#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    float num1, num2, result;
    
    do {
        // Displaying menu
        printf("\n========== ARITHMETIC OPERATIONS ==========\n");
        printf("+ : Addition\n");
        printf("- : Subtraction\n");
 printf("* : Multiplication\n");
        printf("/ : Division\n");
        printf("q : Quit\n");
        printf("===========================================\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        
        if(choice != 'q' && choice != 'Q') {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }
        
        switch(choice) {
            case '+':
                result = num1 + num2;
                printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '-':
                result = num1 - num2;
                printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '*':
                result = num1 * num2;
                printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
                
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("\nError! Division by zero is not allowed.\n");
                }
                break;
                
            case 'q':
            case 'Q':
                printf("\nThank you for using the program! Goodbye!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please enter +, -, *, /, or q\n");
        }
        
    } while(choice != 'q' && choice != 'Q');
    
    return 0;
}
