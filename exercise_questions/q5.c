#include <stdio.h>

void main() {

	char string[100];
	int counter = 0;
	int check = 1;
	char temp;
	scanf("%[^\n]s", string);
	
	int first = 0;
	
	
	
	// remove spaces in string
	
	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == ' ') {

			for (int k = i; string[k] != '\0'; k++) {
				string[k] = string[k+1];
			}
			
			
		}
	} 
	
	printf("NEW STRING: %s\n", string);
	
	
	for (int i = 0; string[i] != '\0'; i++) {
		counter++;
	}

	counter = counter-1;
	
	//printf("first %c\n", string[first]);
	//printf("last %c\n", string[counter]);
		
		
	while (string[first] != '\0') {
	
	if (string[first] != string[counter]) {
		check = 0;
	}
	
	first++;
	counter--;
	
	}
	
	if (check == 0) {
		printf("NOT A PALINDROME\n");
	} else if (check == 1) {
		printf("IT IS A PALINDOME\n");
	}
	
}
