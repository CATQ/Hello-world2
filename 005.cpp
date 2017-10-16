#include <stdio.h>
#include <float.h>
int main (void)
{
	int x = 2.2;
	short y = 0x7FFF;
	short z = 0xFFFF;
	unsigned short w = 0xFFFF;
	float u = 0.177;
	
	printf("%d\n", x );
	printf("%d\n", y );
	printf("%d\n", z );
	printf("%d\n", w );
	printf("%f\n", u );
	
	printf ("double MAX=%.16le, double MIN=%.16le\n", DBL_MAX, DBL_MIN);

	return 0;
 } 
