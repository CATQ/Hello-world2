#include<stdio.h>
int n;
int judge(long k){
	int s[6];
	int temp = 10;
	int i = 1, j;
	while (k != 0){
		s[i] = k%temp;
		k = k/temp;
		i = i+1;
		
	}
	i--;
	int f = 0;
	for (j=1; j<=i; j++){
		if (s[j] != s[i-j+1]) f = 1;
	}
	int sum = 0;
	for (j=1; j<=i; j++)
	  sum = sum+s[j];
	if (sum != n) f = 1;
	if (f == 0) return 0;
	else return 1;
}
int main(){
	long i, j, k;
	int flag = 0;
	scanf("%ld", &n);
	for (i=10000; i<=999999; i++){
		if (judge(i) == 0) 
			{
			printf("%ld\n", i);
			flag = 1;
		}
	}
	if (flag == 0) printf("-1\n");
}
