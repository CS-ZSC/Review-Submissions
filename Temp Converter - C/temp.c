#include <stdio.h>

int main()
{
	char f;
	char t;
	float x, y;
	printf("Convert from: ");
	scanf(" %c", &f);
	printf("\nConvert to: ");
	scanf(" %c", &t);
	printf("\nConverted value: ");	
	scanf("%f", &x);
	
	if (f == 'F') {
		if (t == 'C') {
			y = (x - 32)*5/9;
			printf("\n%f F = %f C", x, y);
        } else if( t = 'K' ) {
			y = ((x - 32)*5/9) + 273.15;
			printf("\n%f F = %f K", x, y);
        } else {
			printf("\n%f F = %f F", x, x);
        }
	} else if (f == 'C') {
        if (t == 'F') {
            y = (x * 9/5) + 32;
            printf("%f C = %f F", x, y);
        } else if( t == 'K') { 
            y = x + 273.15;
            printf("%f C = %f K", x, y);
        } else {
            printf("%f C = %f C", x, x);
        }
    } else if (f == 'K') {	
        if (t == 'F') {
            y = ((x - 273.15)*9/5) + 32;
            printf("%f K = %f F", x, y);
        } else if ( t == 'C') {
            y = x - 273.15;
            printf("%f K = %f C", x, y);
        } else {
            printf(" %f K = %f K", x, x);
        }
    } else {
		printf("\n Not Valid, Try Again ");
		main();
    }

	return 0;
}
