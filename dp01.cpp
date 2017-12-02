#include<stdio.h>
#include<math.h>
int n;
int a[200][200];
int max(int a,int b)
{
	return a>b?a:b;
}
int Maxsum(int x, int y)
{
	if (x == n) return(a[x][y]);
	else
	{
	
	int i = Maxsum(x+1, y);
	int j = Maxsum(x+1, y+1);
	return(max(i,j)+a[x][y]);
    }
}
int main(){
	int i, j, k;
	scanf("%d", &n);
	for  (i=1; i<=n; i++)
	   for (j=1; j<=i; j++)
	scanf("%d", &a[i][j]);
	printf("%d\n", Maxsum(1,1));
}
