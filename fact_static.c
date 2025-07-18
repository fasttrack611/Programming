#include<stdio.h> 

static int factorial(int num){

	if(num<=1)
	  return 1; 
	num=num*factorial(num-1);
}

int main(){

	int fact=0;
 	fact=factorial(6);
   printf("fcat=%d",fact);
}
