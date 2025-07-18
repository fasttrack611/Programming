#include<stdio.h> 

#define MAX(A,B) ((A) > (B) ? (A):(B)) 
#define MIN(A,B) ((A)<(B) ? (A):(B))

#define SQUARE(X)  ((X)*(X))
#define CUBE(X)   (SQUARE(X)*(X))

#define MY_MACRO do{   			    \
                  printf("printing from MACRO-1\n");\
           	  printf("printing from MACRO-2\n");\	
		 }while(0)

#define SIZE_OF(X)  (long)((char*)(&X + 1) - (char*)(&X))

typedef struct test_size{
	int a;
	char b;
	int c;
}data;



int main (){

	data size;

	printf("MAX Vali =%d..\n",MAX(4,6));
	printf("MIN Vali =%d..\n",MIN(4,6));

	printf("SQR Vali =%d..\n",SQUARE(4));
	printf("CUBE Vali =%d..\n",CUBE(4));

	MY_MACRO;

        printf("Size = %ld\n", (long)((char*)(&size + 1) - (char*)(&size)));
        
	printf("Size = %ld\n", SIZE_OF(size));
}
