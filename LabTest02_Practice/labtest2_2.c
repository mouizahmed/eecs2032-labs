#include <stdio.h>

void main() {
	
	
	int m; // matrix 1 row
	int n; // matrix 1 column
	
	int r; // matrix 2 row
	int c; // matrix 2 column
	
	
	scanf("%d %d", &m, &n);
	
	int matrix1[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			scanf("%d", &matrix1[i][k]);
		}
	}
	
	scanf("%d %d", &r, &c);
	
	int matrix2[r][c];
	
	for (int y = 0; y < r; y++) {
		for (int f = 0; f < c; f++) {
			scanf("%d", &matrix2[y][f]);
		}
	}
	
	int cross[r][n];
	
	for (int i = 0; i < r; i++) {
		for (int k = 0; k < n; k++) {
			cross[i][k] = matrix1[i][k] + matrix2[i][k];
			printf("%d ", cross[i][k]);
		}
		printf("\n");
	}

	
	
}	
