#include <stdio.h>

void main() {
	
	int row;
	int column;
	int incorrectRow = 0;
	
	scanf("%d %d", &row, &column); 
	//printf("%d %d\n", row, column);
	
	
	int matrix1[row][column];
	int matrix2[row][column];
	
	int Csize = column-1;
	
	// matrix 1
	for (int i=0; i<row; i++) {
		for (int n=0; n<column; n++) {
			scanf("%d", &matrix1[i][n]);
		}
	}
	
	
	// matrix 2
	for (int i=0; i<row; i++) {
		for (int n=0; n<column; n++) {
			scanf("%d", &matrix2[i][n]);
		}
	}
	
	
	// compare rows
	for (int i=0; i< row; i++) {
		int incorrectNum = 0;
		for (int n=0; n<column; n++) {
			if (matrix1[i][n] != matrix2[i][Csize-n]) {
				incorrectNum++;
			}
		}
		if (incorrectNum != 0) {
				incorrectRow++;
			}
	}

	printf("The number of offending rows is %d\n", incorrectRow);
}
