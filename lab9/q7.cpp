#include <stdio.h>

int main() {
    int arr[10];
    int i, j, k;
    int isUnique;
    
    // Input 10 integer values
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    // Find and display unique elements
    printf("\n\nUnique elements: ");
    for(i = 0; i < 10; i++) {
        isUnique = 1;
        
        // Check if element appears earlier in the array
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        
        // If element is unique so far, check if it appears later
        if(isUnique == 1) {
            for(k = i+1; k < 10; k++) {
                if(arr[i] == arr[k]) {
                    isUnique = 0;
                    break;
                }
            }
            
            if(isUnique == 1) {
                printf("%d ", arr[i]);
            }
        }
    }
    
    return 0;
}
