#include<stdio.h>
int main(){
	int n, i, j, min, t, k;
	int a[2333];
	scanf("%d", &n);
	for (i=0; i<=n-1; i++)
	scanf("%d", &a[i]);
	for (i=0; i<=n-2; i++)
	{
		min=i;
		for (j=i+1; j<=n-1; j++)
		if (a[j]<a[min]) min=j;
		t=a[i];a[i]=a[min];a[min]=t;
	    for (j=0; j<=n-1; j++)printf("%d ", a[j]);
		printf("\n");	
	}
}
