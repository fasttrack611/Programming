#include <stdio.h>

typedef void (*Callback)();

void onEvent() { printf("Event handled by plugin\n"); }

void triggerEvent(Callback cb) {
    printf("Triggering event...\n");
    cb();
}

int main() {
    triggerEvent(onEvent);
    return 0;
}

