#include <stdio.h>

int main() {
    int arr[] = {3, -2, 7, 6, -4, -5, 9, -3, 1, 2, -10, -12};
    int i;
    
    printf("Array elements: ");
    for(i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nPositive elements: ");
    for(i = 0; i < 12; i++) {
        if(arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
