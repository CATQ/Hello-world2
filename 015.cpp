#include<stdio.h>
int judge(int x)
{
	int i, j;
	j=0;
	for (i=2; i<x-1; i++)
	{
		if (x%i == 0) j=1;
	}
	if (j == 1) return 1; 
	else return 0;
}
int main()
{
	int count, max1, sum0, sum1, sum2, sum, n, i, j, k;
	count=0;
	for (i=100; i<9999; i++)
	{
		j=i; sum0=1; sum1=0;
		while (j != 0)
		{
			k=j%10;
			sum0=sum0*k;
			sum1=sum1+k;
			sum2=sum2+k*k;
			j=j/10; 
		}
		if ((judge(sum0) == 0) && (judge(sum1) == 0) && (judge(i) == 0) && (judge (sum2) == 0)) {
		count++; sum=sum+i; max1=i;
	}
	}
	printf("超级素数的个数=%d 所有超级素数之和=%d 最大的超级素数=%d", count, sum, max1);
}
