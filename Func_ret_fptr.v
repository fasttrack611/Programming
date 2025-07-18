#include <stdio.h>

// Define a typedef for a function pointer
typedef int (*Operation)(int, int);

// Sample operation functions
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

// Function returning a pointer to a function
Operation select_op(char op) {
    if (op == '+')
        return add;
    else if (op == '*')
        return multiply;
    else
        return NULL;
}

int main() {
    char operator = '+';
    Operation func = select_op(operator);

    if (func != NULL) {
        int result = func(10, 5);
        printf("Result of %c operation: %d\n", operator, result);
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
