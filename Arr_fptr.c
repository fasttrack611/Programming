#include <stdio.h>

// Declare function prototypes
void north() { printf("\tIn North...\n"); }
void south() { printf("\tIn South...\n"); }
void east()  { printf("\tIn East...\n"); }
void west()  { printf("\tIn West...\n"); }

int main() {
    // Array of function pointers
    void (*direction[4])() = { north, south, east, west };

    printf("In Main()\n");

    for (int i = 0; i < 4; i++) {
        printf("Calling direction[%d]:---> %p\n", i, (void *)direction[i]);
        direction[i]();  // Actually call the function
    }

    return 0;
}
