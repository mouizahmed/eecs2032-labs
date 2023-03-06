#include <stdio.h>


void main() {

	char input[1000];

	scanf("%s", input);
	
	
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] = ' ';
			for (int j = i; input[j] != '\0'; j++) {
				input[j] = input[j+1];
			}
			--i;
		}
	}
	
	
	
	printf("%s\n", input);


}
