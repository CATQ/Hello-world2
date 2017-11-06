#include<stdio.h>
int main()
{
	int i, t, j;
	int a[100];
	for (i=1; i<=3; i++)
	{
		scanf("%d", &t);
		a[i] = t;
	}
	for (i=1; i<=3; i++)
	{
		for (j=1; j<=i; j++)
		if (a[i]<a[j]) 
		{
			t=a[i]; a[i]=a[j]; a[j]=t;
		}
	}
    for (i=1; i<=3; i++)
	printf("%d ", a[i]);
	return 0; 
 } 
