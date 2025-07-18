#include<stdio.h> 

typedef void (*EventHandling)();

void onClick(){ printf("\n in module onClick.. Event\n");}

int main(){

	EventHandling clickHandle=onClick;

	printf("In function Main \n"); 
	clickHandle();	
	return 0; 
}
