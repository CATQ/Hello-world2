#include<stdio.h>
int n, sum;
int a[23];
int abss(int k)
{
	if (k<0) return (-k);
	else return(k);
}
int judge(int k)
{
	int jud, i;
	jud = 0;
	i = 1;
	while ((abss(a[i]-a[i+1])<=1) && (i<=n-1)) i=i+1;
	if (i == n) return 1;
	else return 0;
}
int p(int k)
{
	int i, j, s, e;
	int tem = 0;
	for (i=1; i<=n; i++) 
	   if (a[i] == 0) tem = 1;
	if (tem == 0) sum = sum + judge(0);
	else{
		i = k;
		while (a[i] != 0) i++;
		if (a[i-1] == 1) s = 1; 
 		else s = a[i-1]-1;
 		if (s+2 > n) e=n;
 		else e = s+2;
		for (j=s; j<=e; j++){
			a[i] = j;
			p(i+1);
			a[i] = 0;
		}
		
	}

	
}
int main()
{
	int i, j, k, temp;
	scanf("%d", &n);
	while (n != 0){
	    for (i=1; i<=n; i++)
	    scanf("%d", &a[i]);
	    a[0] = 2;
	    sum = 0;
	    if (a[1]==0)	    
		  	for (i=1; i<=n; i++)
		  	{
		  		a[1] = i;
		  		p(1);
			}
		else p(1);
	    printf("%d\n", sum);
	    scanf("%d", &n);
	} 
}
