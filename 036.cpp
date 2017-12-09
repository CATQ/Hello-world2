#include<stdio.h>
int main(){
	int n, m, p, q, i, j, k;
	int a[2333];
	int b[2333];
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		a[i] = i; b[i] = i;
	}
	scanf("%d", &m);
	for (i=1; i<=m; i++){
		scanf("%d%d", &p, &q);
		if (q>0){
			for (j=0; j<=q-1; j++){
				a[b[p]+j] = a[b[p]+j+1];
				b[a[b[p]+j+1]] = b[p]+j;
			}
			a[b[p]+q] = p; b[p] = b[p]+q;
		}
		else{
			for (j=0; j>=q+1; j--){
				a[b[p]+j] = a[b[p]+j-1];
				b[a[b[p]+j-1]] = b[p]+j;
			}
			a[b[p]+q] = p; b[p] = b[p]+q;
		}
	}
    for(i=1; i<=n; i++) printf("%d ", a[i]);
	printf("\n"); 
}
