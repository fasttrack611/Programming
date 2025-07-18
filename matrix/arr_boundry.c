#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int *p = &arr[0][0];  // Flattened pointer to the first element

    // Safe access using pointer arithmetic
    printf("Value at arr[1][2] using pointer arithmetic: %d\n", *(p + 1 * 3 + 2));  // Output: 6

    // Safe access using standard indexing
    printf("Value at arr[1][2] using indexing: %d\n", *(*(arr + 1) + 2));  // Output: 6

    // Dangerous access: This tries to read arr[2][1] — invalid! Only arr[0..1][0..2] is valid.
    printf("Out-of-bounds access (undefined): %d\n", *(p + 2 * 3 + 1));

    return 0;
}
