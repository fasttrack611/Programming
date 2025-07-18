#include<stdio.h> 

int add(int a, int b){
	return (a+b); 
}

int calc(int x, int y, int (*op)(int, int )){ 
	return op(x,y);
}

int main(){

	printf("\n In Main()");
	printf("Sum: %d\n", calc(5, 3, add));
	return; 
}
