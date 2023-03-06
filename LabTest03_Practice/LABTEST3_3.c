#include <stdio.h>


void main() {

	int n;
	int r1 = 1;
	scanf("%d", &n);
	
	int matrixA[n][n];
	int diag[r1][n];
	
	int i;
	int k;
	
	for (i = 0; i < n; i++) {
		for (k = 0; k < n; k++) {
			scanf("%d", &matrixA[i][k]);
		}
	}
	
	int p;
	int j;
	int t = 1;
	int h = 1;
	diag[0][0] = matrixA[0][0];
	diag[1][0] = matrixA[0][n-1];
	//row for matrixA
	for (p = 1; p < n; p++) {
		diag[0][p] = matrixA[p][(p+p)-h];
		h++;
	}
	for (j = 1; j >= 0; j--) {
		diag[1][p] = matrixA[j][(j-j)+t];
		t--;
	} 
	
	
	int f;
	int q;
	
	for (f = 0; f < 2; f++) {
		for (q = 0; q < n; q++) {
			printf("%d ", diag[f][q]);
		}
		printf("\n");
	}
	

}
