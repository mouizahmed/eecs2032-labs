#include <stdio.h>

void main() {

	int array[] = {1, 2, 3, 4};
	int temp[sizeof(array)/4];

	int last = (sizeof(array)/4)-1;
	int first = 0;
	
	while (last >= 0) {
		int placeholder = array[first];
		array[first] = array[last];
		last--;
		first++;
	
	}
	
	
	for (int i = 0; i < sizeof(array)/4; i++) {
		printf("%d", array[i]);
	}
	
}

