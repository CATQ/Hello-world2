#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, t, a, b, c, m, n, f;
	float p, s;
	scanf("%d", &t);
	for (i=1; i<=t; i++){
		scanf("%d%d%d", &a, &b, &c);
		
		m = (a+b); 
		n = (b+c);
		f = (c+a);
		if ((m <= c) || (n <= a) || (f <= b) || (a<=0) || (b<=0) || (c<=0)) printf("error\n");
		else
		 {
		 	p = 1.0*(a+b+c)/2;
		 	s = sqrt(p*(p-a)*(p-b)*(p-c));
		 	printf("%.2lf\n", s);
		 	
		 }
		
		  
	}
	return 0;
	
}
