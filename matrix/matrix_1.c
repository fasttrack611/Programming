#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int rows, int cols) {
    int **m = malloc(rows * sizeof(int*));
    if (!m) {
        perror("Failed to allocate rows");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        m[i] = malloc(cols * sizeof(int));
        if (!m[i]) {
            perror("Failed to allocate columns");
            exit(EXIT_FAILURE);
        }
    }

    return m;
}

void initialize_matrix(int **m, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            m[i][j] = i * cols + j + 1;
}

void print_matrix(int **m, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
}

void free_matrix(int **m, int rows) {
    for (int i = 0; i < rows; i++)
        free(m[i]);
    free(m);
}

int main() {
    int rows = 3, cols = 4;
    int **matrix = create_matrix(rows, cols);

    initialize_matrix(matrix, rows, cols);
    print_matrix(matrix, rows, cols);

    free_matrix(matrix, rows);
    return 0;
}
