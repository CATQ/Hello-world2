#include<stdio.h>
#include<stdlib.h>
long a[233]; 
int cmp(const void *c,const void *b)
{
	return *(int *)c - *(int *)b;
}
int main(){
	int i, j, k, t, n, m;
	long a[233];
	scanf("%d", &t);
	for (i=1; i<=t; i++){
		scanf("%d%d", &n, &m);
		for (j=0; j<=n-1; j++)
		scanf("%d", &a[j]);
		qsort(a, n, sizeof(a[0]), cmp);
		printf("%d", a[n-m]);
	}
}
