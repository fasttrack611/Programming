#include <stdio.h>
typedef enum { EVENT_A, EVENT_B } EventType;

void handleA() { printf("Handling A\n"); }
void handleB() { printf("Handling B\n"); }

int main() {
    void (*handlers[])(void) = {handleA, handleB};
    EventType e = EVENT_B;
    handlers[e]();
    return 0;
}

