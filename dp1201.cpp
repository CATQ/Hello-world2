#include<stdio.h>
long value[305][305];
int a[304];
int tag[304];
int dp(int i; int k)
{
	long sum;
	int j;
	if (n == k) retrun a[i];
	else
	{
		
	} 
}
int main()
{
	int n;
	long maxv;
	maxv=0;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	scanf("%d", &a[i]);
	a[0] = 1; a[n+1] = 1;
	for (i=1; i<=n; i++)
	if (dp(i,1) > maxv) maxv = dp(i,1);
	printf("%d\n", maxv);
}
 
