#include <stdio.h>

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

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    checkPrimeComposite(number);
    
    return 0;
}
