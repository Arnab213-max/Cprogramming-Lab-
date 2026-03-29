#include <stdio.h>
#include <conio.h>

int main() {
    // Declare and initialize two 3x2 matrices
    int matrix1[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    int matrix2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    
    int result[3][2];
    int i, j;
    
    printf("===== PROGRAM 2: SUM OF TWO 3x2 MATRICES =====\n\n");
    
    // Display first matrix
    printf("First Matrix (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("\nSum Matrix (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
