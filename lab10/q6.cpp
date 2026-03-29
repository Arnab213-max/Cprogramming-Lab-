#include <stdio.h>
#include <conio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j, k;
    
    printf("===== PROGRAM 6: MULTIPLICATION OF TWO 2x2 MATRICES =====\n\n");
    
    printf("Enter elements for FIRST 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("\nEnter elements for SECOND 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Display first matrix
    printf("\nFirst Matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    // Display second matrix
    printf("\nSecond Matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
  
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }
    
   
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    
    printf("\nMultiplication Result (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
