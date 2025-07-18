#include <stdio.h>
void printDepth(int d) { printf("Depth: %d\n", d); }

void recurse(int n, void (*cb)(int)) {
    if (n == 0) return;
    cb(n);
    recurse(n - 1, cb);
}

int main() {
    recurse(3, printDepth);
    return 0;
}

