#include <stdio.h>
#include <conio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int smallest;
    
    printf("===== PROGRAM 3: FIND SMALLEST ELEMENT IN 3x3 MATRIX =====\n\n");
    
    printf("Enter elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe entered matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    smallest = matrix[0][0];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }
    }
    
    printf("\nThe smallest element in the matrix is: %d\n", smallest);
    
    getch();
    return 0;
}
