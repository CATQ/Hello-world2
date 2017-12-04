#include<stdio.h>
int a[200];
int qsort(int r, int l)
{
	int mid, t;
	int x = r; int y = l;
	mid = (x+y)/2;
	while (x < y)
	{
		while (a[x]<a[mid]) x++;
		while (a[y]>a[mid]) y--;
		if (x<=y)
		{
			t= a[x];a[x] = a[y];a[y] = t;
			x++;y--; 
		}
	}
	if (x<l) qsort(x,l);
	if (y>r) qsort(r,y);
}
int main()
{
	int i, n;
	scanf("%d", &n);
	for (i=1; i<=n; i++) scanf("%d", &a[i]);
	qsort(1,n);
	for (i=1; i<=n; i++) printf("%d ", a[i]);
} 
