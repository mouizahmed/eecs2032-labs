#include <stdio.h>

void main() {

	char string[100];
	scanf("%s", string);
	int counter = 0;
	int rep = 0;
	char alpha = 'a' + 1;
	
	for (int i = 0; string[i] != '\0'; i++) {
		// DOESNT FULLY WORK ==> IF LAST TWO CHARACTERS ARE CONSECUTIVE AND THE FIRST IS NOT, IT WILL STILL WORK FOR SOME REASON.
		for (int j = i; j < i + 3 || string[j] != '\0'; j++) {
			if (string[i+1] == string[i] + 1) {
				counter++;
				i++;
			}
			
			
			if (counter >= 2) {
				rep = 1;
			}
		
			
		}
		
	}
	
	if (rep == 1) {
		printf("YES\n");
	}

	

}
