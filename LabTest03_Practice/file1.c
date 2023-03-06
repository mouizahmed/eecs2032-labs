#include <stdio.h>



void main() {

	FILE* f1;
	char c;
	int counter = 0;
	
	f1 = fopen("test.txt", "r");
	
	if (f1 == NULL) {
		printf("File does not exist!\n");
	} else {
		printf("File exists\n");
	}
	

	
	while (c != EOF) {
		c = fgetc(f1);
		if (c == '\n') {
			counter++;
		}
	}
	
	printf("%d", counter);
	
	fclose(f1);

}
