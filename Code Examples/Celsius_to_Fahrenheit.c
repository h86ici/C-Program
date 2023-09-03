#include<stdio.h>

float deg_to_fah(float deg);

void main() {
	
    int tDeg;
	
    printf("Input Temp in °C: ");
	scanf("%d", &tDeg);
	
	printf("\nTemp in Fahrenheit is: %.2f°F\n", deg_to_fah(tDeg));
}

float deg_to_fah(float tdeg) {

    return (tdeg * 9. / 5.) + 32.;
 
}
