#include<stdio.h> 
#include<stdint.h>

typedef unsigned int uint8;

static inline uint8_t swap_nibble(uint8_t byte){
    return ((byte & 0x0F) << 4) | ((byte & 0xF0) >> 4);
}


void swap_nibble_in_buff(uint8 arr[],int len){
	for(int i=0;i<len;i++){
		arr[i]=swap_nibble(arr[i]);
	}
}

int main(){
	int i=0;
	uint8 arr_1[]={0x23,0x78,0x98,0xAB,0xCD,0x34,0xEF};
	int len=sizeof(arr_1)/sizeof(arr_1[0]);

	for(i=0;i<len;i++){
		printf("before swapping=%x\n",arr_1[i]);
	}
	swap_nibble_in_buff(arr_1,len);

	printf("After Swap \n");
	for(i=0;i<len;i++){
		printf("before swapping=%x\n",arr_1[i]);
	}
}
