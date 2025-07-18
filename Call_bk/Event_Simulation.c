#include<stdio.h>

void onClick(){ printf("\n In module onClick\n"); }

void SimulateEvent( void (*fptr)(void) ){ 
	printf("\n In module SimulateEvent()..\n"); 
	fptr();
}

int main(){

	SimulateEvent(onClick);
	return; 
}
