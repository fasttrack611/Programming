#include <stdio.h>

/* Real-World Use Case
This pattern is fantastic for:
Runtime plugin systems  Event handling
Callback-driven architectures  Command dispatching in interpreters or shells*/


typedef void (*PluginFunc)();

void plugin1() { printf("Plugin 1 loaded\n"); }
void plugin2() { printf("Plugin 2 loaded\n"); }

int main() {
    PluginFunc plugins[] = {plugin1, plugin2};
    for(int i = 0; i < 2; i++){
        plugins[i]();
    (*plugins[i])();
    }
    // Output: 
    // Plugin 1 loaded
    // Plugin 2 loaded
    return 0;
}
