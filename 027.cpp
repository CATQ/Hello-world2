#include<stdio.h>
int min(int x, int y)
{
	if (x>y) return y;
	else return x;
}
int main(){
	int minl, lena, lenb, n, i, j, k;
	char a[2333];
	char b[2333];
	while ((a[lena++]=getchar()) != '\n');
	while ((b[lenb++]=getchar()) != '\n');
	lena--;lenb--;
	minl=min(lena, lenb);
	i=0;
	while ((i<=minl) && (a[lena-i] == b[lenb-i])) i++;
	if (i==1) printf("null\n");
	else 
	{
		for (j=lena-i+1; j<=lena-1; j++)
		printf("%c", a[j]);
		printf("\n");
	}
}
