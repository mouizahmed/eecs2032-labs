#include <stdio.h>

void main() {
	
	int m; // og matrix row
	int n; // og matrix column
	int sym = 1;
	
	scanf("%d %d", &m, &n);
	
	
	int matrix[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++ ) {
			scanf("%d", &matrix[i][k]);
		}
	}


	int transpose[n][m];
	
	for (int i = 0; i < n; i++) {
		printf("\n");
		for (int k = 0; k < m; k++) {
			transpose[i][k] = matrix[k][i];
			printf("%d ", transpose[i][k]);
		}
		
	}
	
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (transpose[i][k] != matrix[i][k]) {
				sym = 0;
				break;
				
			}	
		}
	}
	
	if (sym == 0) {
		printf("\n This matrix is NOT symmetric (NO)\n");
	} else {
		printf("\n This matrix IS symmetric (YES)\n");
	}
	

}
