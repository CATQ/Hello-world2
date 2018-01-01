#include<stdio.h>
int main(){
	long sum, i, a, n, temp;
	scanf("%ld%ld", &a, &n);
	i=1;sum = 0;temp = 0;
	while (i<=n){
		temp = temp*10+a;
		sum = sum+temp;
		i=i+1;
	}
	printf("%ld\n", sum);
} 
