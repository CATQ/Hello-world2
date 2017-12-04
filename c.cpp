#include<stdio.h>
int main()
{
	int t, n, i, age;
	scanf("%d", &t);
	for (i=1; i<=t; i++)
	{
		scanf("%d", &n);
		if (n>0) age = 2017-n;
		else age = 2017-n-1;
		printf("%d\n", age);
	}
}
