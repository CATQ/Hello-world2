#include<stdio.h>
int tag[2333];
int visited[2333];
int a[2333][3];
int end;
int dfs(int k)
{
	int i;
	if (visited[k] == end)
	{
		for (i=1; i<=k; i++) printf("%d ", visited[i]);
		printf("\n");
	}
	else
	{
		i = a[visited[k]][1];
		while (i != 0)
		{
			if (tag[a[i][3]] == 0)
			{
			   tag[a[i][3]] = 1;
			   visited[k+1]= a[i][3];
			   dfs(k+1);
			   tag[a[i][3]] = 0;
    		}
			i = a[i][2];
		} 
	}
}
int main(){
	int p, n, m, i, j, k, len;
	int strt;
	scanf("%d%d", &n, &m);
	p = 1; a[p][2] = 0;
	for (i=1; i<=m; i++)
	{
		scanf("%d%d", &j, &k );
		if (a[j][1] ==  0)
		{
			a[j][1] = p; a[p][3] = k;
		}
		else
		{
			a[p][3] = k; a[p][2] = a[j][1]; a[j][1] = p;
		}
		p = p + 1;
	}
	scanf("%d%d", &strt, &end);
	visited[1] = strt; tag[strt] = 1; dfs(1);
}
