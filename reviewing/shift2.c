#include <stdio.h>

void main() {


	
	int a[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };
	int c[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };
	int temp;
	int temp1;
	int size = sizeof(a)/4;
	int copy[size];
	int last = size-1;
	int pos;
	scanf("%d", &pos);
	printf("SHIFT BY2: %d\n", pos);
	
	// shift right by i
	// { 1, 2, 3, 4}
	// i = 1
	// 4, 1, 2, 3	
	
	while(pos) {
		temp = a[last];
		for (int i = last; i > 0; i--) {
			a[i] = a[i-1];
		}
		a[0] = temp;
		pos--;
	}
	
	
	printf("SHIFTED TO THE RIGHT: ");
	
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]); 
	}	
	
	printf("\n");


	
	
	// printf("%d\n", temp);
	// shift left by i
	// {1, 2, 3, 4 }
	// i = 1
	// 2, 3, 4, 1
	
	
	temp = c[0];
	for (int i = 0; i < size; i++) {
		c[i] = c[i+1];
	}
	c[last] = temp;
	
	printf("SHIFTED TO THE LEFT: ");
	
	for (int i = 0; i < size; i++) {
		printf("%d ", c[i]); 
	}	
	
	printf("\n");
	
	
	
	
	
}
