#include <stdio.h>
#include <conio.h>

int main() {
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int matrix2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int i, j;
    
    printf("===== PROGRAM 1: DISPLAY TWO 2x3 MATRICES =====\n\n");
    
    printf("First Matrix (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
