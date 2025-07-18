#include<stdio.h> 
void count_val();

int main(){
	count_val();
	count_val();
	count_val();
	count_val();
}

void count_val(){
	int x=10; 
	//static int x=10; 
	x+=10; 
	printf("Valuer of x=%d",x);
}
