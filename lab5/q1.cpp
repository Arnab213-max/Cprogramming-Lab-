#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter a number N: ");
    scanf("%d", &n);
    
    printf("\nMultiplication Table up to %d x 10:\n\n", n);
    
    for(i = 1; i <= n; i++) {
        printf("Table of %d: ", i);
        for(j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
