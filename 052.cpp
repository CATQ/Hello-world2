#include<stdio.h>
#include<math.h>
judge(long k){
	long i, x, temp = 1, flag = 1;
	x = sqrt(k);
	for (i=2; i<=x; i++){
		if (k%i == 0){
			if (i == 2 || i == 3 || i == 5){
				flag = judge(k/i);
				break;
			}
			else flag = 0;
		}
		else if (!(k == 2 || k == 3 || k == 5)) flag = 0;
	}
	
	return (flag);
}
int main(){
	long m, i, j, k, n;
	long a[100010];
	scanf("%ld", &n);
	for (i=1; i<=n; i++){
		scanf("%ld", &m);
		a[1] = 1;
		for (j=2; j<=m; j++){
		a[j] = judge(j);
		}
		for (j=1; j<=m; j++) 
			if (a[j] == 1) printf("%ld ", j);
		printf("\n");
	}
} 
