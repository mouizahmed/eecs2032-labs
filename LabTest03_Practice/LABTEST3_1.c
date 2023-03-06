#include <stdio.h>


void main() {

	int r;
	int c;
	int counter = 0;
	
	scanf("%d %d", &r, &c);
	
	int matrixA[r][c];
	int matrixB[r][c];
	
	int i;
	int j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &matrixA[i][j]);
		}
	}
	

	int n;
	int l;
	
	for (n = 0; n < r; n++) {
		for (l = 0; l < c; l++) {
			scanf("%d", &matrixB[n][l]);
		}
	}
	
	
	
	int p;
	int k;
	
	for (p = 0; p < r; p++) {
		for (k = 0; k < c; k++) {
			if (matrixA[p][k] < matrixB[p][k]) {
				counter += 1;
			}
		}
	}
	
	
	
	if (counter > 0) {
		printf("NO\n");
	} else if (counter == 0) {
		printf("YES\n");
	}
	


}
