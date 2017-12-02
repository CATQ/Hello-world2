
#include<stdio.h>
int main(){
	int i, j, k, n, p;
	int a[2333];
	scanf("%d", &n);
	scanf("%d", &k);
	scanf("%d", &p);
	k = k%n;
	for(i=0; i<=n-1; i++)
	scanf("%d", &a[i]);

	if (p==1){
    for (i=k; i<=n-1; i++)
	printf("%d ", a[i]);
	for (i=0; i<k; i++)
	printf("%d ", a[i]);	
    }

    else{
    for (i=n-k; i<=n-1; i++)
	printf("%d ", a[i]);
	for (i=0; i<n-k; i++)
	printf("%d ", a[i]);	
 	
    }
}
