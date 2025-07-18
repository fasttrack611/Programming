#include<stdio.h> 

typedef unsigned char uchar; 

uchar swap_nibble(uchar byte){

	return((0x0F & byte) <<4 | (byte & 0xF0) >>4);

}

int main(){
   uchar original=0xAB;
	uchar swap = swap_nibble(0xAB);

	printf("Before Swap=%x\n",original);
	printf("Before After =%x \n",swap);

}
