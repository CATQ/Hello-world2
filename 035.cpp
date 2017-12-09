#include<stdio.h>

int n, sum;
int a[23];
int abss(int k){
	if (k<0) return (-k);
	else return(k);
}
int judge(int k){
	int jud, i;
	jud = 0;
	i = 1;
	while ((abss(a[i]-a[i+1])<=1) && (i<=n-1)) i=i+1;
	if (i == n) return 1;
	else return 0;
}

int p(int k)
{
	int i, j, s;
	int tem = 0;
	
	for (i=1; i<=n; i++) 
	   if (a[i] == 0) tem = 1;
	
	if (tem == 0) sum = sum + judge(0);
	else{
	    while (a[k] !=0) k++;
	    if (k<=n){
	    	if (k == 1){
	    	    for (j=1; j<=n; j++){
	    		a[k] = j;
	    		p(k);
			    }
			    a[k] = 0;
            }
            else{
            	if (a[k-1] >= 2) s = a[k-1];
            	else s = 2;
            	for (j=s-1; j<=s+1; j++){
            		a[k] = j;
            		p(k);
				}
				a[k] = 0;
			}
		}
    }
}

int main(){
	int i, j, k, temp;
	scanf("%d", &n);
	while (n != 0){
	
	for (i=1; i<=n; i++)
	{
		scanf("%d", &k);
		a[i] = k;
	} 
	sum = 0; temp = 0;
	for (i=1; i<=n; i++) if (a[i] == 0) 
	{
		p(1); temp = 1; break;
	} 
	if (temp == 0) sum = sum + judge(0);
	printf("%d\n", sum);
	
	scanf("%d", &n);
    }
}

