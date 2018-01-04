#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	return *(int *)b-*(int *)a;
}
long a[100010];
int main(){
	long temp, max, n, i, j, k, m;
	scanf("%ld", &n);
	for (i=1; i<=n; i++){
		scanf("%ld%ld", &m, &k);
		for (j=0; j<=m-1; j++) scanf("%ld", &a[j]);
		qsort(a, m, sizeof(a[0]), cmp); 
		temp = 1; max = a[0];
		j = 0;
		while (j <= m-1){
			if(a[j]<max) {
					max = a[j];
					temp = temp + 1;
				} 
			if (temp == k) {
				printf("%ld\n", max);
				break;
			} 
			j++;
		}
		if (temp < k ) printf("error\n"); 
	}
}
