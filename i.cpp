#include<stdio.h>
int main(){
    int n, i, j, k;
    float c;
    while (scanf("%d", &n) == 1){
    	for (i=0; i<=n; i++){
    		c = 1.0*i;
    		k = 1;
    		if (n == (c*(c+1))/2){
    			printf("YES\n");
    			k = 0; 
    			break;
			}
		}
		if (k == 1) printf("NO\n");
	}
}
