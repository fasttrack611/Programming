#include <stdio.h>
#include <string.h>

typedef void (*UARTCallback)(char);

UARTCallback uartRxHandler = NULL;

void registerUARTCallback(UARTCallback cb) {
    uartRxHandler = cb;
}

void uartISR(char receivedChar) {
    if (uartRxHandler) {
        uartRxHandler(receivedChar);
    }
}

void processChar(char c) {
    printf("📨 Received char: %c\n", c);
}

int main() {
    registerUARTCallback(processChar);

    // Simulate UART receiving characters
    char testData[] = "ALEEM";
    for (int i = 0; i < strlen(testData); i++) {
        uartISR(testData[i]);
    }
    return 0;
}

