#include<stdio.h>
int max(int a, int b)
{
	return a>b?a:b;
}
int main(){
	int a[200][200];
	int maxSum[200];
	int n, i, j, k;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	  for (j=1; j<=i; j++)
	scanf("%d", &a[i][j]);
	for (i=1; i<=n; i++) maxSum[i] = a[n][i];
	for (i=n-1; i>=1; --i)
	 for (j=1; j<=i; ++j)
	    maxSum[j] = max(maxSum[j], maxSum[j+1])+a[i][j];
    printf("%d\n", maxSum[1]);
}
