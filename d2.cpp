#include<stdio.h>
int main(){
	long t;
	int a[1050000];
	long p, i, j, k, l, r, jud, b, c;
    scanf("%ld", &t);
    a[0]=1;p=0;
    for (i=1; i<=1010; i++)
    {
    	k=i*i;
    	jud = 0;
    	while (k != 0)
    	{
    		b=k%10;
    		k=k/10;
			if (not((b==0) || (b==1) ||(b==4) ||(b==9))) jud =1;
		}
		if (jud == 0)
		{
			a[i*i]= a[p] + 1;
			for (j=p+1; j<=i*i-1; j++) a[j]= a[p];
			p=i*i;
		}
	}
 	for (i=1; i<=t; i++)
 	{
 		scanf("%ld%ld", &l, &r);
 		if (r<l) {
		 p=l; l=r; r=p;} 
 		if (l>0) printf("%ld\n", a[r]-a[l-1]);
 		else if (l==0) printf("%ld\n", a[r]);
	 }
}
