#include<stdio.h> 
#define ROW 3 
#define COL 4

printMatrix(int (*arr)[COL], int rows ){

	for (int i=0; i<ROW; i++)
	for (int j=0; j<COL; j++)
		printf("arr[%d][%d]=%d\n",i,j, *(*(arr+i)+j));

}

sumMatrix(int (*arr)[COL], int row){

	int sum=0; 
	for(int i=0;i<ROW;i++)
	for(int j=0;j<COL;j++)
	sum +=arr[i][j]; 
	return sum;
}

int main(){

	int arr[ROW][COL]={
			 { 1,2,3,4},
			 { 2,2,3,4},
			 { 3,2,3,4},
	};

	printMatrix(arr, ROW);

	printf("Sum =%d\n", sumMatrix(arr,ROW));
	return 0; 
}
