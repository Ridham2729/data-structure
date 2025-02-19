#include <stdio.h>

#define MAX 10


void addMatrices(int A[][MAX], int B[][MAX], int result[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}


void subtractMatrices(int A[][MAX], int B[][MAX], int result[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}


void multiplyMatrices(int A[][MAX], int B[][MAX], int result[][MAX], int rowA, int colA, int rowB, int colB) {
    if (colA != rowB) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void transposeMatrix(int A[][MAX], int result[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = A[i][j];
        }
    }
}


void displayMatrix(int matrix[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int rowA, colA, rowB, colB;

    
    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rowB, &colB);
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

  
    printf("\nMatrix A + Matrix B:\n");
    if (rowA == rowB && colA == colB) {
        addMatrices(A, B, result, rowA, colA);
        displayMatrix(result, rowA, colA);
    } else {
        printf("Matrix addition is not possible. Dimensions don't match.\n");
    }

   
    printf("\nMatrix A - Matrix B:\n");
    if (rowA == rowB && colA == colB) {
        subtractMatrices(A, B, result, rowA, colA);
        displayMatrix(result, rowA, colA);
    } else {
        printf("Matrix subtraction is not possible. Dimensions don't match.\n");
    }

  
    printf("\nMatrix A * Matrix B:\n");
    if (colA == rowB) {
        multiplyMatrices(A, B, result, rowA, colA, rowB, colB);
        displayMatrix(result, rowA, colB);
    } else {
        printf("Matrix multiplication is not possible. Number of columns of A must be equal to number of rows of B.\n");
    }

   
    printf("\nTranspose of Matrix A:\n");
    transposeMatrix(A, result, rowA, colA);
    displayMatrix(result, colA, rowA);

    printf("\nTranspose of Matrix B:\n");
    transposeMatrix(B, result, rowB, colB);
    displayMatrix(result, colB, rowB);

    return 0;
}
