#include<stdio.h>
#include<math.h>
int n;
int a[200][200];
int maxSum[200][200];
int max(int a,int b)
{
	return a>b?a:b;
}
int Maxsum(int x, int y)
{
	if (maxSum[x][y] != -1) return maxSum[x][y]; 
	if (x == n) maxSum[x][y] = a[x][y];
	else
	{
	
	int i = Maxsum(x+1, y);
	int j = Maxsum(x+1, y+1);
	maxSum[x][y] = (max(i,j)+a[x][y]);

    }
    return maxSum[x][y];

}
int main(){
	int i, j, k;
	scanf("%d", &n);
	for  (i=1; i<=n; i++)
	   for (j=1; j<=i; j++)
	{
	  scanf("%d", &a[i][j]);
	  maxSum[i][j] = -1;
    }
	printf("%d\n", Maxsum(1,1));
}
