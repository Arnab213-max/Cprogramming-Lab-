#include <stdio.h>

int main() {
    int arr[] = {10, 5, 7, 3, 1, 4, 6, 12, 8, 14};
    int search, i;
    int found = 0;
    
    printf("Array elements: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter the element to search: ");
    scanf("%d", &search);
    
    for(i = 0; i < 10; i++) {
        if(arr[i] == search) {
            printf("Element %d found at index %d", search, i);
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        printf("Element %d not found in the array", search);
    }
    
    return 0;
}
