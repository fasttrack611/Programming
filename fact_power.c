#include<stdio.h>

int power(int x,int y){

	if(y==1)
		return x; 
	else
	       return (x* power(x,y-1));	
}

int factorial(int num){

	if(num==0)
		return 1; 
	else return(num*factorial(num-1));
}

int fibbonaci(int val){

	if(val==0) return 0;
	if(val==1) return 1;

	else return (fibbonaci(val-1) + fibbonaci(val-2));
}

int main(){
	int val=0;
	val=power(2,8);
	printf("power of =%d\n",val);
	
	printf("Factoruial !num series =%d..\n",factorial(10));
	
	printf("\n Fibbanocci series =%d..\n",fibbonaci(10));
 
}


