#include<stdio.h>
int main(){
	char a[501];
	char b[501];
	int numa[501];
	int numb[501]; 
	int carry[1002];
	char c;
	int lena, lenb, i, len, j, m, n;
	scanf("%d", &m);
	scanf("%c", &c);
	for (n=1; n<=m; n++){
	
	lena=0; lenb=0;
	while ((a[++lena] = getchar()) !=' ');
	while ((b[++lenb] = getchar()) !='\n');
	lena--; lenb--;
	for (i=1; i<=lena; i++) numa[i] = a[lena-i+1]-48;
	for (i=1; i<=lenb; i++) numb[i] = b[lenb-i+1]-48;
    for (i=1; i<=lena+lenb; i++) carry[i] = 0;
    for (i=1; i<=lena; i++)
		for (j=1; j<=lenb; j++)
		carry[i+j-1] = carry[i+j-1] + numa[i]*numb[j];
	len=lena+lenb;
	for (i=1; i<=len; i++)
	{
		carry[i+1] = carry[i+1]+carry[i]/10;
		carry[i] = carry[i]%10;
	}
	while (carry[len] == 0) len--;
	
}
}
