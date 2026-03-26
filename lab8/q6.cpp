#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is: ", num);
    if (num == 0)
        printf("0");
    else
        decimalToBinary(abs(num));
    printf("\n");
    return 0;
}
