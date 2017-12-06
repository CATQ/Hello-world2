#include<stdio.h>
int a[233][233];
int m, n;
int zig(int x, int y, int k)
{
	a[x][y] = k;
	if (x == 1){
		if (y == n) 
	}
}
int main(){
	scanf("%d%d", &m, &n);
	a[1][1] = 1;
	zig(1,1,1);
	for (i=1; i<=m; i++)
	{
		for (j=1; j<=n; j++) printf("%d ", a[i][j]);
		printf("\n"); 
	}
} 
