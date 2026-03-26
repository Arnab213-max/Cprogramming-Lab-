#include <stdio.h>
#include <math.h>

int main() {
    int n, num, digit, sum, count, temp, original;
    
    printf("Enter a number N: ");
    scanf("%d", &n);
    
    printf("\nArmstrong numbers from 1 to %d are:\n", n);
    
    for(num = 1; num <= n; num++) {
        // Count number of  the digits
        temp = num;
        count = 0;
        while(temp != 0) {
            temp = temp / 10;
            count++;
        }
        
        // Calculate the sum of digits that are raised to power of digit count
        temp = num;
        sum = 0;
        while(temp != 0) {
            digit = temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }
        
        // Check if number is Armstrong or not 
        if(sum == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
