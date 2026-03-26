#include <stdio.h>

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

int main() {
    int num1, num2, num3, result;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    result = findSmallest(num1, num2, num3);
    
    printf("Smallest number among %d, %d, %d is: %d\n", num1, num2, num3, result);
    
    return 0;
}
