#include<stdio.h>
int main(){
	int n,  j, k, i;
	int p[2333];
	scanf("%d", &n);
    k=1;p[1]=0;
    while (k>0){
	
    while (k<n) {
      k=k+1;p[k]=0; 
	}
	for (i=1; i<=n; i++) printf("%d ", p[i]);printf("\n");
	while ((k>0) &&(p[k]==1)) k=k-1; 
	if (k>0) p[k]=1;
}
}
