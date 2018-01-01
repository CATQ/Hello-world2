#include<stdio.h>
int p(int k){
	if (k == 0 || k == 1) return(1);
	else return(p(k-1)+p(k-2));
}
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		scanf("%d", &j);
		printf("%d\n",p(j-1));
	}
} 
