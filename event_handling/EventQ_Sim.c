#include <stdio.h>
#define MAX_EVENTS 3


typedef void (*EventQ)(void);

void event1() { printf("Event 1\n"); }
void event2() { printf("Event 2\n"); }
void event3() { printf("Event 3\n"); }

int main() {
    void (*eventQueue[MAX_EVENTS])() = {event1, event2, event3};
    for (int i = 0; i < MAX_EVENTS; i++) eventQueue[i]();

    EventQ event_Q[]={event1, event2, event3};

    for (int i = 0; i < MAX_EVENTS; i++) 
	    event_Q[i]();

    return 0;
}

