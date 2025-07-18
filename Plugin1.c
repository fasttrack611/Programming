#include <stdio.h>

typedef void (*PluginFunc)();

void loadPlugin(PluginFunc p) {
    printf("Loading plugin...\n");
    p();
}

void pluginX() { printf("Plugin X loaded\n"); }

int main() {
    loadPlugin(pluginX);
    return 0;
}

