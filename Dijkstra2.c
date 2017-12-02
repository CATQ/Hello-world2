#include<stdio.h>
int main()
{
	int dist[2333];
	int prev[2333];
	int s[2333];
	int a[233][233];
	const int MAXINT = 32767;
	int n, i, j, m, k, l, v0;
	scanf("%d%d", &n, &m);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		a[i][j] = MAXINT;
		
	 } 
	v0 = 1;
	for (i=1; i<=m; ++i)
	{
		scanf("%d%d%d", &j, &k, &l);
		a[j][k]=l;
	}
	for (i=1; i<=n; ++i)
	{
		dist[i] = a[v0][i];
		s[i] = 0;
		if (dist[i] == MAXINT) prev[i] = -1;
		else prev[i] = v0;
	}
	dist[v0] = 0;
	s[v0] = 1;
	for (i=2; i<=n; i++)
	{
		int mindist = MAXINT;
		int u = v0;
		for (j=1; j<=n; ++j)
		if ((s[j] == 0) && dist[j]<mindist)
		{
			mindist = dist[j];
			u = j;
		}
		s[u] = 1;
		
		for (j=1; j<=n; j++)
		if ((s[j] == 0) && a[u][j]<MAXINT)
		{
			if (dist[u]+a[u][j]< dist[j]){			
			dist[j] = dist[u] + a[u][j];
			prev[j] = u;
		    }
		}
	} 
	
	for (i=1; i<=n; i++) printf("%d ", dist[i]);printf("\n");
	for (i=1; i<=n; i++) printf("%d ", prev[i]);printf("\n");
	for (i=1; i<=n; i++) 
	{
	   for (j=1; j<=n; j++) 
	 
	   printf("%d ", a[i][j]);printf("\n");
}
	
	
}
