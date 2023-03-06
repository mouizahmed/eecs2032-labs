#include <stdio.h>

void main() {
	
	int row;
	int column;
	
	scanf("%d %d", &row, &column);
	
	int matrixA[row][column];
	int matrixB[column][row];

	for (int i = 0; i < row; i++) {
		for (int n = 0; n < column; n++) {
			scanf("%d", &matrixA[i][n]);
		}
	}
	
	//TRANSPOSE
	// LOOP THROUGH ROW AND ONLY TAKE FIRST COLUMN 
	for (int i = 0; i < row; i++) {
		for (int n = 0; n < row; n++) {
			matrixB[i][n] = matrixA[n][i];
		}
	}
	
	// FIRST ROW OF MATRIX B
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {
			printf("%d ", matrixB[j][i]);
		}
		printf("\n");
	}
	

}
