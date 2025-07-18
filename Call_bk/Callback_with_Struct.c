#include <stdio.h>
typedef struct {
    const char *name;
    void (*action)();
} Plugin;

void runPlugin() { printf("Plugin running...\n"); }

int main() {
    Plugin p = {"Runner", runPlugin};
    printf("Executing %s\n", p.name);
    p.action();
    return 0;
}

