#include<stdio.h> 
#include<stdlib.h>

void print_matrix(int row, int column, int mat[row][column]){

	for(int i=0; i<3; i++){
		for (int j=0; j<4; j++)
			printf("\n data[%d][%d]=%d",i,j,mat[i][j]);

	}
}

/**
 * @brief Prints a 2D integer matrix.
 *
 * @param rows   Number of rows in the matrix.
 * @param cols   Number of columns in the matrix.
 * @param matrix The 2D array to print.
 */
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix [%d x %d]:\n", rows, cols);
    for (int i = 0; i < rows; ++i) {
        printf("[ ");
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }
}



int main(){

	int data[3][4]={
		{1,22,66,77}, 
		{2,32,86,76}, 
		{3,42,96,78},
	};	

	printf(" in main function\n");

	for(int i=0; i<3; i++){
		for (int j=0; j<4; j++)
			printf("\n data[%d][%d]=%d",i,j,data[i][j]);
	}

	//print_matrix(3,4,data);
	printMatrix(3,4,data);
	return 0; 
}
