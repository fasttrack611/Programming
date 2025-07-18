#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 10
#define MAX_COL 10

int main() {
    int **ptr;
    int i, j;

    // Allocate array of row pointers
    ptr = (int **)malloc(MAX_ROW * sizeof(int *));
    if (ptr == NULL) {
        printf("Memory allocation failed for rows\n");
        return 1;
    }

    // Allocate columns for each row
    for (i = 0; i < MAX_ROW; i++) {
        ptr[i] = (int *)malloc(MAX_COL * sizeof(int));
        if (ptr[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1;
        }
    }

    // Fill and print the matrix
    for (i = 0; i < MAX_ROW; i++) {
        for (j = 0; j < MAX_COL; j++) {
            ptr[i][j] = j;
            printf("%2d ", ptr[i][j]);
        }
        printf("\n");
    }

    // Free the memory
    for (i = 0; i < MAX_ROW; i++) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}
