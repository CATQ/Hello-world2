#include<stdio.h>
void max(int x, int y)
{
	if (x>y) printf("%d",x);
	else printf("%d",y);
}
int main ()
{
	int x,y;
	scanf("%d%d", &x, &y);
	max(x,y);
	return 0;
}
 
