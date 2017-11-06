#include<stdio.h>
int main()
{
	long i, j, t, n;
    scanf("%d", &n);
	long a[n];
	a[0]=0;
	for (i=1; i<=n; i++)
	{
		t=0; j=i;
		while (j != 0)
		{
		     if (j%10 == 1) t=t+1;
			 j=j/10;		    	
		}
		a[i]=a[i-1]+t;
	}	
	printf("%d\n", a[n]);
	return 0;
}
