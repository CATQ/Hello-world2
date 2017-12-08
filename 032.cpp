#include<stdio.h>
int main(){
	char s1[233]={'\0'};
	char s2[233]={'\0'};
	int lens1, lens2, lenmin, i, j, k;
	
	lens1 = 0; lens2 = 0;
	while ((s1[lens1++]=getchar()) != '\n');
	while ((s2[lens2++]=getchar()) != '\n');
	k=0;
	lens1--; lens2--;
	if (lens1>lens2) lenmin = lens1;
	else lenmin = lens2;
	for (i=0; i<=lenmin; i++){
		if (s1[i] != s2[i]) {
			k=1;printf("%d\n", s1[i]-s2[i]);break;
		}
	}
	if (k == 0) printf("%d\n", k);
}
