#include <stdio.h>
#include <string.h>

void main() {

	int n;
	int repeat = 0;
	scanf("%d", &n);
	char string[n][20];
	
	for (int i = 0; i < n; i++) {
		scanf("%s", string[i]);
	}
	

	
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < n; j++) {
			if (strcmp(string[k], string[j]) == 0) {
				repeat++;
			}
		}
	}
	
	
	if (repeat > n) {
		printf("Repeated\n");
	} else {
		printf("NO Repetition\n");
	}
	
	
	printf("%d\n", repeat);
}

// 0	1
// test test
// string[0] == string[0] (1)
// string[0] == string[1] (2)
// string[1] == string[0] (3)
// string[1] == string[1] (4)
