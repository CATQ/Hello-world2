#include<stdio.h>
#include<stdlib.h>
long a[233]; 
int cmp(const void *c,const void *b)
{
	return *(int *)c - *(int *)b;
}
int main(){
	int i, j, an, bn, k, n, sum;
	int a[2333];
	int b[2333];
	while (scanf("%d", &n)==1){
        an = 0; bn = 0;
        a[0] = 0; b[0] = 0;
		for (i=1; i<=n; i++)
		{
			scanf("%d", &k);
			if (k%2 == 1) {
				a[an] = k;an = an+1;
			}
			else {
				
				b[bn] = k;bn = bn+1;
		    }
		} 
		an--; bn--;
		    if (an == 0) printf("0\n");
		    else{
	           	qsort(a, an, sizeof(a[0]), cmp);
		        qsort(b, bn, sizeof(b[0]), cmp);
                if (an % 2 == 0){
                	for (i=0; i<=an-1; i++) sum = sum+a[i];
				}
				else{
					for (i=1; i<=an-1; i++) sum = sum+a[i]; 
				}
				for (i=0; i<=bn-1; i++) sum=sum+b[i];
				printf("%d\n", sum);
			}
		
		
	}
}
