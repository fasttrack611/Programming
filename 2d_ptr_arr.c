#include<stdio.h> 
#define ROW 3
#define COL 4

// Prints a 2D matrix from a flat pointer
void printMatrixPtr(const char *label, int *matrix, int rows, int cols) {
    printf("%s:\n", label);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
    printf("\n");
}

addMatrixptr(int *ptr_a, int *ptr_b, int *ptr_c, int row, int col ){
	int i ,j=0;
	int total = row * col;
	for(i=0; i<total;i++){
		*(ptr_c+i)= *(ptr_a +i) +*(ptr_b+i);
	}
 }

int main(){

	int sum[ROW][COL]; 
	int a[ROW][COL]={
		  {1,2,4,5},
		  {1,2,4,5},
		  {1,2,4,5}
		};

	int b[ROW][COL]={
		  {1,2,4,5},
		  {1,2,4,5},
		  {1,2,4,5}
	};

	addMatrixptr(&a[0][0], &b[0][0] ,&sum[0][0],ROW,COL);
	printMatrixPtr("A + B", &sum[0][0], ROW, COL);
    return 0; 
}
