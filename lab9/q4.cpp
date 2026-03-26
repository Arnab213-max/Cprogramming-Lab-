#include <stdio.h>

int main() {
    int arr[] = {3, -2, 7, 6, -4, -5, 9, -3, 1, 2, -10, -12};
    int smallest;
    int i;
    
    smallest = arr[0];
    
    printf("Array elements: ");
    for(i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    
    for(i = 1; i < 12; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("\nSmallest element: %d", smallest);
    
    return 0;
}
