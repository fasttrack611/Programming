#include<stdio.h> 

typedef void (*EventHandling)();

void onStart(){ printf("\n in module onStart().. Event\n");}
void onStop() { printf("\n in module onStop().. Event\n");}

int main(){

	EventHandling clickHandle[]={onStop,onStart};

	printf("In function Main \n"); 
	for(int i=0; i<2;i++){
	clickHandle[i]();	

	}
	return 0; 
}
