#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    
    if (n < 0) {
        return -1; // Return -1 for negative numbers
    }
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    return fact;
}

int main() {
    int number;
    long long result;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    result = factorial(number);
    
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", number, result);
    }
    
    return 0;
}
