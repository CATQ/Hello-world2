#include<stdio.h>
int main(){
	int n, i, j, k, m;
	int a[2333];
	int p[2333];
	scanf("%d", &m);
	for (i=1; i<=m; i++){
		scanf("%d", &n);
		
		for (j=1; j<=n; j++){
		   scanf("%d", &a[j]);p[j]=1;
	    }

        k=1;p[1]=0;
        while (k>0){
	
          while (k<n) {
           k=k+1;p[k]=0; 
	      }
	      printf("--> ");
     	  for (j=1; j<=n; j++){
		   
  		      if (p[j]==0)printf("%d ", a[j]);
  		      }
			printf("\n");
     	  while ((k>0) &&(p[k]==1)) k=k-1; 
     	  if (k>0) p[k]=1;
        }


	  }
	}

