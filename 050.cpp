#include<stdio.h>
int main(){
	int i, j, k, m, n, p, q;
	int a[100][100];
	int b[100][100];
	int s[100][100];
	scanf("%d%d%d%d", &m, &n, &p, &q);
	
	for (i=1; i<=m; i++){
		for (j=1; j<=n; j++)
		scanf("%d", &a[i][j]);
	}
	for (i=1; i<=p; i++){
		for (j=1; j<=q; j++)
		scanf("%d", &b[i][j]);
	}
	if (n != p) printf("error\n");
	else{
		for (i=1; i<=m; i++)
			for (j=1; j<=q; j++)
				{
					for (k=1; k<=p; k++)
					s[i][j] = s[i][j]+a[i][k]*b[k][j];
				}
		for (i=1; i<=m; i++)
			{
				for (j=1; j<=q; j++) printf("%d ", s[i][j]);printf("\n");
			}
	}
	
}
