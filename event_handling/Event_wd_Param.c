#include<stdio.h>

typedef void(*EventHandler)(int);

void onTempchange(int temp ){

	printf("\n In Tempmerature Event =%d \n", temp);
}
int main(){

	EventHandler tempHandler =onTempchange; 
	printf("\n In function Main \n");
	tempHandler(60);
	return 0; 
}

