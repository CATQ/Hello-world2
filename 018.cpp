
#include<stdio.h>
#include<math.h>
int a,b,c,T;
int max(int a, int b){
	return a>b?a:b;
}
int main() {
    scanf("%d", &T);
	while (T--){
		scanf("%d%d%d", &a, &b, &c);
		int M = max(a,b);
		M = max (M, c);
		if (a+b+c-M<=M){
			printf("error\n");
			continue;
		}
		double p = 1.0*(a+b+c)/2;
		double S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n", S);
	} 
}
