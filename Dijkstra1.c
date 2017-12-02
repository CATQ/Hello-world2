#include<stdio.h>
	const int MAXINT = 32767;
	const int MAXNUM = 10;
	int dist[MAXNUM];
	int prev[MAXNUM];
	int A[MAXNUM][MAXNUM];
void Dijkstra(int v0)
{

	bool s[MAXNUM];
	int n=MAXNUM;
	for (int i=1; i<=n; ++i)
	{
		dist[i]=A[v0][i];
	    s[i]=false;
	    if (dist[i] == MAXINT)
	      prev[i] = -1;
	    else prev[i] = v0;
	}
	dist[v0] = 0;
	s[v0] = true;
	for (int i=2; i<=n; i++)
	{
		int mindist = MAXINT;
		int u = v0;
		for (int j=1; j<=n; ++j)
		  if ((!s[j]) && dist[j]<mindist)
		  {
		  	u=j;
		  	mindist = dist[j];
		  }
		s[u] = true;
		for (int j=1; j<=n; ++j)
		if((!s[j]) && A[u][j]<MAXINT) 
		{
			if (dist[u] + A[u][j] < dist[j])
            {
            	dist[j] =  dist[u] + A[u][j];
            	prev[j] = u;
			}
		  }  
	}
} 
