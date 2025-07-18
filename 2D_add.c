#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[ROWS][COLS];

    // Add A and B
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Matrix A:\n");
    printMatrix(ROWS, COLS, A);

    printf("\nMatrix B:\n");
    printMatrix(ROWS, COLS, B);

    printf("\nSum of A and B:\n");
    printMatrix(ROWS, COLS, sum);

    return 0;
}

