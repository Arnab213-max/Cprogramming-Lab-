#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, num, i, isPrime, fact, sum;
    
    do {
        // Display menu
        printf("\n========== NUMBER OPERATIONS MENU ==========\n");
        printf("1. Even Odd Program\n");
        printf("2. Prime or Composite\n");
        printf("3. Factorial of a number\n");
        printf("4. Sum of N natural numbers\n");
        printf("5. Quit\n");
        printf("=============================================\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\n--- Even or Odd Checker ---\n");
                printf("Enter a number: ");
                scanf("%d", &num);
                
                if(num % 2 == 0) {
                    printf("%d is an EVEN number.\n", num);
                } else {
                    printf("%d is an ODD number.\n", num);
                }
                break;
                
            case 2:
            \
                printf("\n--- Prime or Composite Checker ---\n");
                printf("Enter a number: ");
                scanf("%d", &num);
                
                if(num <= 1) {
                    printf("%d is neither prime nor composite.\n", num);
                } else {
                    isPrime = 1; 
                    for(i = 2; i <= num/2; i++) {
                        if(num % i == 0) {
                            isPrime = 0; 
                            break;
                        }
                    }
                    
                    if(isPrime == 1) {
                        printf("%d is a PRIME number.\n", num);
                    } else {
                        printf("%d is a COMPOSITE number.\n", num);
                    }
                }
                break;
                
            case 3:
                printf("\n--- Factorial Calculator ---\n");
                printf("Enter a number: ");
                scanf("%d", &num);
                
                if(num < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    fact = 1;
                    for(i = 1; i <= num; i++) {
                        fact = fact * i;
                    }
                    printf("Factorial of %d = %d\n", num, fact);
                }
                break;
                
            case 4:
                printf("\n--- Sum of N Natural Numbers ---\n");
                printf("Enter the value of N: ");
                scanf("%d", &num);
                
                if(num < 1) {
                    printf("Please enter a positive integer.\n");
                } else {
                    sum = 0;
                    for(i = 1; i <= num; i++) {
                        sum = sum + i;
                    }
                    printf("Sum of first %d natural numbers = %d\n", num, sum);
                }
                break;
                
            case 5:
                printf("\nThank you for using the program! Goodbye!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
        }
        
    } while(choice != 5);
    
    return 0;
}
