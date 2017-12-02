#include<stdio.h>
int main(){
	int n, i, j, t, an;
	int a[2333];
	int b[2333];
	int c[2333];
	scanf("%d", &n);
	for (i=0; i<=n-1; i++)
    {
	   scanf("%d", &a[i]);b[i]=0;
    }
    for (j=0; j<=n-2; j++)
    {   
    	for (i=0; i<=n-1; i++)
    	if (b[i] == 0) t=i;
    	for (i=0; i<=n-1;i++)
    	if ((a[t]>a[i]) && (b[i] == 0)) t=i;
		b[t]=1;
		
        an=j+1;	
    	for (i=0; i<=n-1; i++)
    	if (b[i] == 0){
    		c[an]=a[i];
    		an=an+1;
		} 
		c[j]=a[t];
	    for (i=0; i<=n-1; i++) printf("%d ", c[i]);
	    printf("\n");
	
	}
} 
