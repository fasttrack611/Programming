#include <stdio.h> 
#include <stdlib.h>
#define MAX 10

int main(){
	int *ptr;

	ptr=(int *) malloc(MAX*sizeof(int));

		if(ptr==NULL)
			printf("Memory Alocated is NULL\n");

	for(int i=0; i<MAX; i++){
		ptr[i]= i+2; 
		printf(" Printing ARR i=%d..ptr[i]..%d\n",i, ptr[i]);
	}
}

