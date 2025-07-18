#include<stdio.h>

swap(a,b){
	a=a+b;	
	b=a-b;	
	a=a-b;	
	printf(" A=%d,B=%d",a,b);
}

swap_xor(a,b){

	a=a^b;
	b=b^a;
	a=a^b;
	printf(" A=%d,B=%d",a,b);


}

int main (){
	swap(3,4);
	swap_xor(6,8);
}
