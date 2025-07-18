#include<stdio.h>

count_bits(int val){
	int count=0;
	for(;val!=0;val>>=1)
		if(val&1) count++;

	printf("Bits =%d",count);
}

count_bits_alt(int num){
	int count=0; 
	while(num){
		num=num&(num-1);
		count++;
	}
	printf("Bits =%d..\n",count);
}
	

sum_od_dig(int num){
int sum=0;
	while(num>0){
	sum=sum+num%10;
	num=num/10;
	}
	printf("...Sum =%d\n",sum);
}

int main(){

	int x=0x3;
	count_bits(x);
	count_bits_alt(15);
	sum_od_dig(9029);
}

