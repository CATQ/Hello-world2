#include<stdio.h>
int p(long long a, long long b){
	long long c;
	float d;
	d = 1.0*a/b +0.5;
	c = d;
	return c;
}
int main(){
	int t, i, j, k;
	long long a, b;
	scanf("%d", &t);
	for (i=1; i<=t; i++){
		scanf("%lld%lld", &a, &b);
		printf("%lld\n", p(a,b));
	} 
}
