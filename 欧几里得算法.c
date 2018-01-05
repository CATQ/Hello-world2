#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long a,b,x,y,d;
int gcd(long x, long y){
	long t;
	if (x%y == 0){
		a = 0;
		b = 1;
	}
	else{
		gcd(y, x%y);
		t = a;
		a = b;
		b = t-(x/y)*b;
	}
}
int main(){
	
	scanf("%ld%ld", &x, &y);
	d = b;
	gcd(a, b);
	printf("%d\n", (x%d + d)%d);
}
