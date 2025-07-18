#include <stdio.h>

// Module A handler
void moduleA_handler(void) {
    printf("Module A handler called.\n");
}

// Module B handler
void moduleB_handler(void) {
    printf("Module B handler called.\n");
}

// Module C handler
void moduleC_handler(void) {
    printf("Module C handler called.\n");
}

int main() {
    // Array of function pointers, all taking void and returning void
    void (*handlers[])(void) = {
        moduleA_handler,
        moduleB_handler,
        moduleC_handler
    };

    int num_modules = sizeof(handlers) / sizeof(handlers[0]);

    // Loop through all modules and invoke their handlers
    for (int i = 0; i < num_modules; i++) {
        handlers[i]();  // Call the current handler
    }

    return 0;
}
