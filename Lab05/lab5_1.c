#include <stdio.h>
#define PRECISION (1000)

void main() {
	
	
	float num;
    	scanf("%f", &num);
    	
    	
    	char c[50];
    	int p = 0, k = 0;
    	sprintf(c, "%g", num);
    	
    	while (*c) {
		if (c[p] == '.') {
			break;
		}
		++p;
	}
	
	for (int i = p; c[i] != '\0'; i++) {
		k++;
	}
	
	int exp;
	int base = 10;
	int base2 = 10;
	
	for (int i = 0; i < k; ++ i) {
		base *= 10;
	}
	
	for (int i = 0; i < p-1; ++ i) {
		base2 *= 10;
	}

   	// storing the integer part of the floating point number
   	int int_part = (int)num;
	
	
   	int frac_part = (((int)(num*base) % base))/100;
	
  	float output = frac_part + (float)int_part/base2;

  	printf("%.*f\n", p, output);
  	//printf("INTEGER PART: %d \n", int_part);
	//printf("FRACTION PART (INTEGER): %d \n", frac_part);
	//printf("DECIMAL PLACES: %d \n", k);
	//printf("BASE1: %d \n", base);
	//printf("BASE2: %d \n", base);
	
	
	
	
	
}


