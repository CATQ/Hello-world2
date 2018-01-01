#include<stdio.h>
int main(){
	int n, s, i, j, k;
	int a[105][105];
	s = 1;
	for (i=1; i<=100; i++){
		for (j=1; j<=100; j++){
			if (j == 1) a[i][j] = s;
			else a[i][j] = a[i][j-1]+i+j-1;
		}
		s = s+i;
	}
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		for (j=1; j<=n-i+1; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
} 
