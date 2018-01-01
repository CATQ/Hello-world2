#include<stdio.h>
long a[100010];
int qs(long l, long r){
	long x, y, temp, mid;
	x = l; y = r; 
	while (x < y){
		mid = (x+y)/2;
		while (a[x] <= a[mid]) x++;
		while (a[y] >= a[mid]) y--;
		if (y>=x){
			temp = a[x];
			a[x] = a[y];
			a[y] = temp; 
		}
		x++;y--;
	}
	if (x<r) qs(x,r);
	if (y>l) qs(l,y);
}
int main(){
	long temp, max, n, i, j, k, m;
	scanf("%ld", &n);
	for (i=1; i<=n; i++){
		scanf("%ld%ld", &m, &k);
		for (j=1; j<=m; j++) scanf("%ld", &a[j]);
		qs(1,m); 
		temp = 1; max = a[1];

		j = 1;
		while (j <= m){
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
