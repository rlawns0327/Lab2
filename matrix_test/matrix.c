// matrix.c

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j;
	int row, col;
	
	printf("input size of row, col : ");
	scanf("%d %d",&row, &col);
	printf("row = %d, col = %d\n", row, col);
	
	// Matirx 
	int **matrix_1 = malloc(sizeof(int *) * row);
	int **matrix_2 = malloc(sizeof(int *) * row);
	for(i = 0 ; i < row ; i++){
		matrix_1[i] = malloc(sizeof(int) * col);
		matrix_2[i] = malloc(sizeof(int) * col);
	}
	
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			matrix_1[i][j] = i*10+j;	
			matrix_2[i][j] = j*10+i;	
		}
	}
	printf("\nMatrix_1\n==========================\n");
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d ",matrix_1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix_2\n==========================\n");
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d ",matrix_2[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix_1 + Matrix_2\n==========================\n");
	for(i = 0 ; i < row ; i++){
		for(j = 0 ; j < col ; j++){
			printf("%d ",matrix_1[i][j] + matrix_2[i][j]);
		}
		printf("\n");
	}
	
	free(matrix_1);
	free(matrix_2);
	
	return 0;	
}	
		
