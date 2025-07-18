#include<stdio.h> 

typedef unsigned int uInt;
uInt * getAddr(int *val){

	printf("\n in func getAddr()\n");
	return val;
}

int main(){

	uInt val=10; 
	uInt* (*func_ptr)(int *)=getAddr;
	 uInt *add=func_ptr(&val);
	printf(" In  Main() addr=%x\n",add);
	printf(" In  Main()  (*func_ptr)()%x\n",(*func_ptr)(&val));

	return 0; 
}
