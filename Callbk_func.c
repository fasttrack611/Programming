#include <stdio.h>

// Callback expects a function that takes an int* and returns void
void Callback(void (*func_ptr)(int *)) {
    int rec_val = 42;  // Initialize the value
    printf("\nIn Callback Function\n");
    func_ptr(&rec_val);  // Pass address
    printf("In Callback Function Rec Val = %d\n", rec_val);
}

// Function matches the expected signature
void getAddr(int *val_ptr) {
    printf("In getAddr()\n");
    *val_ptr += 10;  // Example mutation
}

int main() {
    printf("In Main()\n");
    Callback(getAddr);  // Pass function pointer directly
    return 0;
}
