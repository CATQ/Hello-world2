#include<stdio.h>
int a[233][233];
int m, n, temp;
int zig(int x, int y, int k)
{
	a[x][y] = k;
	if ((x == m) && (y == n)) ;	
	else if (x == 1){
		if (y % 2 == 1){
			if (y == n) zig(x+1, y, k+1);
			else zig(x, y+1, k+1);
		} 
		else zig(x+1, y-1, k+1);
		
	}
	else if(y == 1){
		if (x % 2 == 0){
			if(x == m) zig(x, y+1, k+1);
			else zig(x+1, y, k+1);
		}
		else zig(x-1, y+1, k+1);
	}
	else if(x == m){
		if (x % 2 == 0){
			if (y % 2 == 1) zig(x, y+1, k+1);
			else zig(x-1, y+1, k+1);
			 
		}
		else{
			if (y % 2 == 1) zig(x-1, y+1, k+1);
			else zig(x, y+1, k+1); 
		}
	}

	else if(y == n){
	    if(y%2 == 0){
	    	if(x%2 == 1) zig(x+1, y-1, k+1);
			else zig(x+1, y, k+1); 
		}
		else{
			if(x%2 == 1) zig(x+1, y, k+1);
			else zig(x+1, y-1, k+1);
		}
	}
	else if ((x+y) % 2 == 0) zig(x-1, y+1, k+1);
	else zig(x+1, y-1, k+1);

}
int main(){
	int i, j;
	scanf("%d%d", &m, &n);
	a[1][1] = 1;
	temp = (m + n) % 2;
	zig(1,1,1);
	for (i=1; i<=m; i++)
	{
		for (j=1; j<=n; j++) printf("%d ", a[i][j]);
		printf("\n"); 
	}
} 
