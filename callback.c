#include <stdio.h>

typedef void (*InterruptCallback)(void);

void defaultHandler() {
    printf("Default interrupt handler triggered.\n");
}

void customHandler() {
    printf("\nCustom GPIO interrupt handler executed.\n");
}

void simulateInterrupt(InterruptCallback cb) {
    printf("\n... 🔔 Interrupt occurred!\n");
    cb();  // Call the registered callback
}

int main() {
    InterruptCallback gpioCallback = defaultHandler;

    // Register custom callback
    gpioCallback = customHandler;

    // Simulate interrupt
    simulateInterrupt(gpioCallback);

    return 0;
}

