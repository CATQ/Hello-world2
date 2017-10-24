#include<stdio.h>
void sswr(float x)
{
	int y = x;
	int z = x+0.5;
	if (z > y) printf("%d", y+1);
	 else printf("%d", y); 
}
int main()
{
	float x;
	scanf("%f", &x );
	sswr(x);
}
