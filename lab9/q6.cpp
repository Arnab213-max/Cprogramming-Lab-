#include <stdio.h>
#include <conio.h>  // Add this for getch()

int main() {
    int arr[10];
    int i, j, temp;
    
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nSorted array (ascending): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nFirst element (smallest): %d", arr[0]);
    printf("\nLast element (largest): %d\n", arr[9]);
    
    getch();  
    return 0;
}
