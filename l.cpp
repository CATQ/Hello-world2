#include<stdio.h>
int main(){
	int t, n, p, i, j, k;
	double c, sum;
	scanf("%d", &t);
	for (i=1; i<=t; i++){
		scanf("%d%d", &n, &p);
		if (n == 0) c = 1;
		else
		{
		c = 1.0 - 1.0*p/100;
		for (j=1; j<=n-1; j++){
			c = c*(1-1.0*p/100);
		}}
		printf("%lf\n", 1-c); 
	}
}
