#include <stdio.h>
void quzheng(float x)
{   
    int y = x;
    printf("%d\n",y);
    printf("%lf\n", x-y);
}
int main ()
{  	
    float x ;
	scanf("%f", &x );
	quzheng( x );
	return 0; 
 } 
 

 

