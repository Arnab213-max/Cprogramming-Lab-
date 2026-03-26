#include <stdio.h>

// Function declarations (prototypes)
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

// Function definitions
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
        return 0.0f;  // Returns the  float literal
    }
}

int main() {
    float num1, num2;
    
    printf("Enter two numbers: ");
    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Error: Invalid input!\n");
        return 1;
    }
    
    printf("\nResults:\n");
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, sub(num1, num2));
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, mul(num1, num2));
    
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, div(num1, num2));
    } else {
        printf("Division: Cannot divide by zero\n");
    }
    
    return 0;
}
