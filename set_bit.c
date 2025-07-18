#include<stdio.h> 


bit_set(int value){

	int count=0;
	while(value){	
		if(value&1)
		count++;
		value>>=1;
	}
	printf("set_bit=%d",count);
}

int main(){

 bit_set(7);

 return 0;
}
