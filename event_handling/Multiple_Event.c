#include <stdio.h>
typedef void (*EventHandler)(const char *);

void onKeyPress(const char *key) {
    printf("Key pressed: %s\n", key);
}

void onMouseClick(const char *button) {
    printf("Mouse clicked: %s\n", button);
}

int main() {
    EventHandler handlers[] = {onKeyPress, onMouseClick};
    handlers[0]("Enter");
    handlers[1]("Left");
    return 0;
}

