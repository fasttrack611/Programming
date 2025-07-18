#include <stdio.h>

int add(int a, int b) { return a + b; }

int (*get_adder())(int, int) {
       	return add; 
}


int main() {
    int (*fp)(int, int) = get_adder();
    printf("%d\n", fp(5, 3));  // Output: 8
    return 0;
}
