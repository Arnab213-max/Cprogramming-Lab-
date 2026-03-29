#include <stdio.h>
#include <conio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int primary_sum = 0, secondary_sum = 0;
    
    printf("===== PROGRAM 7: SUM OF PRIMARY AND SECONDARY DIAGONALS =====\n\n");
    
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
    
  
    for(i = 0; i < 3; i++) {
        primary_sum = primary_sum + matrix[i][i];
    }
    
    for(i = 0; i < 3; i++) {
        secondary_sum = secondary_sum + matrix[i][2 - i];
    }
    

    printf("\n===== DIAGONAL SUMS =====\n");
    printf("Primary Diagonal Sum (top-left to bottom-right): %d\n", primary_sum);
    printf("Secondary Diagonal Sum (top-right to bottom-left): %d\n", secondary_sum);
  
    printf("\nPrimary Diagonal Elements: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
        if(i < 2) printf("+ ");
    }
    printf("= %d\n", primary_sum);
    
    printf("Secondary Diagonal Elements: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][2 - i]);
        if(i < 2) printf("+ ");
    }
    printf("= %d\n", secondary_sum);
    
    getch();
    return 0;
}
