#include <stdio.h>
#include <string.h>

void main() {
	
	char str[100];
	char strNew[100];
	int counter;
	
	scanf("%s", str);
	
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'Z' && str[i+1] == 'Z') {
			counter += 1;
			break;
		}
	}
	
	//strncpy(strNew, str, i); 
	
	
	if (counter == 0) {
		printf("NO ZZ\n");
	} else {
		printf("%d\n", i);
	}
}
