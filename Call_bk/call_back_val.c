#include<stdio.h> 

void show_num(int num) { printf("\nIn show_num =%d \n", num); }

void run(void (*fptr)(), int num){ 
	printf("\n in Run..\n"); 
	fptr(num); 	
}

int main(){
	printf("\n in Main "); 
	run(show_num, 45);
	return 0; 
}
