#include <stdio.h>

int main() {
    int arr[] = {10, 5, 7, 3, 1, 4, 6, 12, 8, 14};
    int sum = 0;
    int i;
    
    printf("Array elements: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    
    printf("\nSum of all elements: %d", sum);
    
    return 0;
}
