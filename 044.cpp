#include<iostream>
#include<cstdio>
#define LL long long
using namespace std;
void e_gcd(long a,long b,long &x,long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return;
    }
    e_gcd(b,a%b,x,y);
    int d=x;
    x=y;
    y=d-a/b*y; 
}
int main()
{
    long a,b,x,y;
    scanf("%ld%ld",&a,&b);
    while (a!=0 && b!=0){
		e_gcd(a,b,x,y);
    	printf("%d\n",(x%b+b)%b);
    	scanf("%ld%ld", &a, &b);
    } 
	return 0;
}
