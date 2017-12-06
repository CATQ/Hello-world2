#include<stdio.h>
#include<stdlib.h>
int a[2333];
int cmp(const void *c,const void *b)
{
	return *(int *)c - *(int *)b;
}
int main(){
    int a[2333];
	int i, j, k, min, n, m;
	scanf("%d", &m);
	for (j=1; j<=m; j++){
	
	scanf("%d", &n);
	for (i=0; i<=n-1; i++)
	scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), cmp);
	min = a[0];
	
	for (i=1; i<=n-1; i++) {
	   if (a[i]>min) {
	   	min = a[i];
	   	printf("%d\n", a[i]);
	   	break;
	   }
    }
    if (min == a[0]) printf("ERROR\n"); 
	}
} 
