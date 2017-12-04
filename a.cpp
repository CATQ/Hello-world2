#include<stdio.h>
int main()
{
	int t, n, i, j;
	int lm, um, dm, rm;
	int x, y; 
	long s;
	scanf("%d", &t);
	for (i=1; i<=t; i++)
	{
		lm=10000;rm=-10000;um=-10000;dm=10000;
		
		scanf("%d", &n);
		for (j=1; j<=n; j++)
		{
		scanf("%d%d", &x, &y);
		if (x>rm) rm=x;
		if (x<lm) lm=x;
		if (y>um) um=y;
		if (y<dm) dm=y;
		
		}
		s=(rm-lm)*(um-dm);
		printf("%ld\n", s); 
	}
}
 
