#include <stdio.h>

void main() {
	/*
	char str[100];
	
	scanf("%[^\n]s", str); 
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			for (int k = i; str[k] != '\0'; k++) {
				str[k] = str[k + 1];
			}
		}
	}
	
	printf("%s\n", str);
	*/	

	int c[] = { 1, 2, 3, 4 };
	int size = sizeof(c)/4;
	
	int pos = 1;
	// remove element at i = 1 --> { 1, 3, 4 }
	
	
	for (int i = pos; i < size; i++) {
		c[i] = c[i+1];
	}
	size--;
	
	for (int i = 0; i < size; i++) {
		printf("%d ", c[i]);
	}
	
	
	printf("\n");

	
	
	

}
