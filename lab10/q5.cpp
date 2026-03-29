#include <stdio.h>
#include <conio.h>

#define MAX 10


void getMatrix(int matrix[MAX][MAX], int rows, int cols, char name);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols, char name);
void calculateDifference(int mat1[MAX][MAX], int mat2[MAX][MAX], 
                         int result[MAX][MAX], int rows, int cols);

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int N, M;
    
    printf("===== PROGRAM 5: DIFFERENCE OF TWO NxM MATRICES =====\n\n");

    printf("Enter number of rows (N) [max 10]: ");
    scanf("%d", &N);
    printf("Enter number of columns (M) [max 10]: ");
    scanf("%d", &M);
    

    if(N > MAX || M > MAX || N <= 0 || M <= 0) {
        printf("Invalid dimensions! Rows and columns must be between 1 and 10.\n");
        getch();
        return 1;
    }
    
    printf("\n");

    getMatrix(matrix1, N, M, 'A');
    printf("\n");
    getMatrix(matrix2, N, M, 'B');
    
    
    calculateDifference(matrix1, matrix2, result, N, M);
    

    printf("\n===== RESULT =====\n");
    displayMatrix(matrix1, N, M, 'A');
    printf("\n");
    displayMatrix(matrix2, N, M, 'B');
    printf("\n");
    displayMatrix(result, N, M, 'C');
    printf("\nWhere C = A - B\n");
    
    getch();
    return 0;
}

void getMatrix(int matrix[MAX][MAX], int rows, int cols, char name) {
    int i, j;
    printf("Enter elements for Matrix %c (%dx%d):\n", name, rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int matrix[MAX][MAX], int rows, int cols, char name) {
    int i, j;
    printf("Matrix %c (%dx%d):\n", name, rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void calculateDifference(int mat1[MAX][MAX], int mat2[MAX][MAX], 
                         int result[MAX][MAX], int rows, int cols) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
