#include<stdio.h>
#include<math.h>
int main()
{
	long t;
	int a[100000];
	long p, i, j, k, l, r, jud, b, c;
    scanf("%ld", &t);
    a[0]=1;
    for (i=1; i<=100000; i++)
    {
    	k=sqrt(i);
    	jud=0;
    	p=i;
    	while (p != 0)
    	{
    		b=p%10;
    		p=p/10;
    		if (not((b == 1) || (b == 4)|| (b ==9) || (b == 0))) jud=1;
    		break;
		}
		if ((k*k == i) && (jud == 0)) a[i] = a[i-1]+1;
		else a[i] = a[i-1]; 
	}
	for (i=30; i<=100; i++) printf("%d ", a[i]);
	for (i=1; i<=t; i++)
	{
		scanf("%ld%ld", &l, &r);
		printf("%d\n", a[r]-a[l-1]);
	 } 
} 
