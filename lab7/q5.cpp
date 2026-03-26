#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    return sum;
}

int main() {
    int n, result;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    result = sumOfNaturalNumbers(n);
    
    printf("Sum of first %d natural numbers is: %d\n", n, result);
    
    return 0;
}
