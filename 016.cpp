#include<stdio.h>　
#include <math.h> 　　/*判断是否为素数*/ 　
int IsPrime(long number); 　　/*判断此数是否为超级素数函数*/ 　
int IsSuperPrime(long number); 　　/*求100~9999之间所有的超级素数个数,和,及最大值*/ 　　
void main() 　　
{ 　　long spn = 0; 　　
long spm = 0; 　
　long sps = 0; 　
　for( long i = 101; i<= 9997; i += 2) 　
　{ 　　if(IsSuperPrime(i)==1) 　
　{ 　　sps += i; 　　spn++ ; 　　spm = i; 　
　} 　
　} 　
　printf("sum=%ld,Total=%d,Max=%d",sps,spn,spm); 　　
getchar(); 　　} 　　/*判断是否为素数*/ 　
　int IsPrime(long number) 　
　{ 　　if(number==1) 　　{ 　　return 0; 　　} 　
　for(int j=2; j<=sqrt(double(number)); j++) 　
　{ 　　if(number%j==0) 　　
{ 　　return 0; 　
　} 　
　} 　
　return 1; 　
　} 　　/*判断此数是否为超级素数函数*/ 　
　int IsSuperPrime(long number) 　
　{ 　
　if(IsPrime(number)==1) 　
　{ 　
　do{ 　　
number=number/10; 　
　if(IsPrime(number)==0) 　
　{ 　　return 0; 　　} 　
　} 　　while(number>=10); 　
　return 1; 　
　} 　　
else 　　{ 　　return 0; 　　} 　
　}
