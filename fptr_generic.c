#include<stdio.h>

void process_float(float x){
	printf("in in process_float..%0.2f..\n",x);
}


void process_int (int x){
	printf("\n process_int..%d..\n",x);

}


int main(){

	void (*fp_int)(int)=process_int; 
	void (*fp_float)(float )=process_float; 

	fp_int(8);
	fp_float(3.14f);
	return 0; 
}

