#include <stdio.h>

#define ROWS 3
#define COLS 3

// Adds A and B into result
void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            result[i][j] = A[i][j] + B[i][j];
}

// Subtracts B from A into result
void subtractMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            result[i][j] = A[i][j] - B[i][j];
}

// Multiplies A and B element-wise (not matrix multiplication)
void multiplyMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            result[i][j] = A[i][j] * B[i][j];
}

// Prints a 2D matrix
void printMatrix(const char* label, int matrix[ROWS][COLS]) {
    printf("%s:\n", label);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
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

    int sum[ROWS][COLS], diff[ROWS][COLS], prod[ROWS][COLS];

    addMatrix(A, B, sum);
    subtractMatrix(A, B, diff);
    multiplyMatrix(A, B, prod);

    printMatrix("Matrix A", A);
    printMatrix("Matrix B", B);
    printMatrix("Sum (A + B)", sum);
    printMatrix("Difference (A - B)", diff);
    printMatrix("Product (A * B)", prod);

    return 0;
}

