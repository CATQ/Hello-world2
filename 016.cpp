#include<stdio.h>��
#include <math.h> ����/*�ж��Ƿ�Ϊ����*/ ��
int IsPrime(long number); ����/*�жϴ����Ƿ�Ϊ������������*/ ��
int IsSuperPrime(long number); ����/*��100~9999֮�����еĳ�����������,��,�����ֵ*/ ����
void main() ����
{ ����long spn = 0; ����
long spm = 0; ��
��long sps = 0; ��
��for( long i = 101; i<= 9997; i += 2) ��
��{ ����if(IsSuperPrime(i)==1) ��
��{ ����sps += i; ����spn++ ; ����spm = i; ��
��} ��
��} ��
��printf("sum=%ld,Total=%d,Max=%d",sps,spn,spm); ����
getchar(); ����} ����/*�ж��Ƿ�Ϊ����*/ ��
��int IsPrime(long number) ��
��{ ����if(number==1) ����{ ����return 0; ����} ��
��for(int j=2; j<=sqrt(double(number)); j++) ��
��{ ����if(number%j==0) ����
{ ����return 0; ��
��} ��
��} ��
��return 1; ��
��} ����/*�жϴ����Ƿ�Ϊ������������*/ ��
��int IsSuperPrime(long number) ��
��{ ��
��if(IsPrime(number)==1) ��
��{ ��
��do{ ����
number=number/10; ��
��if(IsPrime(number)==0) ��
��{ ����return 0; ����} ��
��} ����while(number>=10); ��
��return 1; ��
��} ����
else ����{ ����return 0; ����} ��
��}
