#include<stdio.h> 


void add(int a, int b){

	printf("\n in func Add()\n");
	printf("\n Sum=%d..()\n",(a+b));
}

int main(){

	void (*func_ptr)(int, int)=add;
	func_ptr(5,6);

	return 0; 
}
