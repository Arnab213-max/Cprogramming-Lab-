#include <stdio.h>
#include <conio.h>

int main() {
    int matrix1[2][4], matrix2[2][4], result[2][4];
    int i, j;
    
    printf("===== PROGRAM 4: SUM OF TWO 2x4 MATRICES =====\n\n");

    printf("Enter elements for FIRST 2x4 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
   
    printf("\nEnter elements for SECOND 2x4 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    printf("\nFirst Matrix (2x4):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
  
    printf("\nSecond Matrix (2x4):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
  
    printf("\nSum Matrix (2x4):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
