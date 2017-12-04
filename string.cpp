#include<stdio.h>
#include<string.h>
int main(){
	char string[1000];
	int len, a, i, j, temp;
	char t;
	len = 0;
	while ((string[len++]=getchar()) != '\n');
	len--;
	for (i=0; i<=len-1; i++)
	for (j=i; j<=len-1; j++)
	if (string[i]>string[j])
	{
		t = string[i]; string[i] = string[j]; string[j] = t;
	}
	for (i=0; i<=len-1; i++) printf("%c", string[i]);
	printf("\n"); 
	return 0;
} 
