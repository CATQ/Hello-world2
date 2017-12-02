#include<stdio.h>
int main(){
	char a[501];
	char b[501];
	int numa[501];
	int numb[501]; 
	int carry[502];
	char c;
	int lena, lenb, i, len, j, m, n;
	scanf("%d", &m);
	scanf("%c", &c);
    for (n=1; n<=m; n++){
	
	lena=0; lenb=0;
	while ((a[++lena] = getchar()) !=' ');
	while ((b[++lenb] = getchar()) !='\n');
	lena--; lenb--;
	len = lena+lenb;
	for (i=1; i<=lena; i++) numa[i] = a[i]-48;
	for (i=1; i<=lenb; i++) numb[i] = b[i]-48;
    for (i=1; i<=len; i++) carry[i] = 0;
    i=1;
    while (lena !=0)
    {
    	carry[i] = carry[i] +numa[lena];
    	lena--; i++;
	}
	i=1;
	while (lenb != 0)
	{
		carry[i] = carry[i] +numb[lenb];
		lenb--; i++;
	}
	for (i=1; i<=len; i++)
	{
		carry[i+1] = carry[i+1] + carry[i]/10;
		carry[i] = carry[i] % 10;
	}
	while (carry[len] == 0) len--;
	for (i=len; i>=1; i--)
	printf("%d", carry[i]);
	printf("\n");
}
}
