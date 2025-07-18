#include<stdio.h> 

void greet() { printf("\nIn module Greet \n"); }

void execute(void (*fptr)()){ 
	printf("\n in execute "); 
	fptr(); 	

}

int main(){
	printf("\n in Main "); 
	execute(greet);
	return 0; 
}
