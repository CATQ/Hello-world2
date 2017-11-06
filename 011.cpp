#include<stdio.h>
#include<math.h>
int main() 
{
	long i, j, n, m;
    float t;
    scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%d", &m);
		if (m<0)printf("ERROR\n");
		else if (m>=0)
		{
			t=sqrt(m);
		    printf("%.2f\n", t);
		} 
	}
}
