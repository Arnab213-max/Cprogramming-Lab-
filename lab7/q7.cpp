#include <stdio.h>

// Function declarations
void checkEvenOdd(int num);
void checkPrimeComposite(int num);
int findSmallest(int a, int b, int c);
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int sumOfNaturalNumbers(int n);
long long factorial(int n);

// Function implementations
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even number.\n", num);
    } else {
        printf("%d is Odd number.\n", num);
    }
}

void checkPrimeComposite(int num) {
    int i, count = 0;
    
    if (num <= 1) {
        printf("%d is neither Prime nor Composite.\n", num);
        return;
    }
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    
    if (count == 2) {
        printf("%d is Prime number.\n", num);
    } else {
        printf("%d is Composite number.\n", num);
    }
}

int findSmallest(int a, int b, int c) {
    int smallest;
    
    if (a < b && a < c) {
        smallest = a;
    } else if (b < a && b < c) {
        smallest = b;
    } else {
        smallest = c;
    }
    
    return smallest;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    return sum;
}

long long factorial(int n) {
    long long fact = 1;
    
    if (n < 0) {
        return -1;
    }
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    return fact;
}

int main() {
    int choice, num1, num2, num3, n;
    long long factResult;
    float result;
    
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime or Composite\n");
        printf("3. Find Smallest among 3 numbers\n");
        printf("4. Perform Arithmetic Operations\n");
        printf("5. Sum of first n natural numbers\n");
        printf("6. Calculate Factorial\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num1);
                checkEvenOdd(num1);
                break;
                
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num1);
                checkPrimeComposite(num1);
                break;
                
            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                result = findSmallest(num1, num2, num3);
                printf("Smallest number is: %.0f\n", result);
                break;
                
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Addition: %.2f\n", add(num1, num2));
                printf("Subtraction: %.2f\n", sub(num1, num2));
                printf("Multiplication: %.2f\n", mul(num1, num2));
                if (num2 != 0)
                    printf("Division: %.2f\n", div(num1, num2));
                else
                    printf("Division: Cannot divide by zero\n");
                break;
                
            case 5:
                printf("Enter the value of n: ");
                scanf("%d", &n);
                result = sumOfNaturalNumbers(n);
                printf("Sum of first %d natural numbers is: %.0f\n", n, result);
                break;
                
            case 6:
                printf("Enter a number: ");
                scanf("%d", &num1);
                factResult = factorial(num1);
                if (factResult == -1)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial of %d is: %lld\n", num1, factResult);
                break;
                
            case 7:
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 7);
    
    return 0;
}
