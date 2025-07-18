#include <stdio.h>
typedef enum { OFF, ON } State;

void off_state() { printf("Turning OFF\n"); }
void on_state() { printf("Turning ON\n"); }


int main() {
    void (*states[2])() = {off_state, on_state};
    State current = OFF;
    
    states[current]();  // Output: Turning OFF
    current = ON;
    states[current]();  // Output: Turning ON
    return 0;
}
