#include <stdio.h>

void main() {
	
	int num;
	int counter = 0;
	int next;
	scanf("%d", &num);
	
	int c[num];
	
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &c[i]);
	}
	c[num] = '\0';
	
	for (int n = 0; n < num; n++) {
		next = n+1;
		if (c[n] > 0 && c[next] < 0) {
			++counter;
			printf("CHECKED AT INDEX N = %d\n", n);
		}
	}
	
	printf("%d\n", counter);
}
