#include<stdio.h>
#include<string.h>
int main(){
	int n, i, j, len;
	char s[100];
	char c;
	i = 0;
	scanf("%d%c", &n, &c);
	while (i<=n){
		gets(s);
		len = strlen(s);
		for (j=len-1; j>=0; j--){
			if (s[j]>=97 && s[j]<=122) printf("%c", s[j]);
		}
		printf("\n");
		i=i+1;
	}
} 
