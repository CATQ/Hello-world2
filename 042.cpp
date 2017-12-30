#include<stdio.h>
#include<string.h>
char a[32];
char b[32]; 
int judge(char c){
	if (c-48 >=0 && c-48 <=9) return 1;
	else return 0;
} 
int main(){
	while (scanf("%s", a) != EOF){
		int len = strlen(a);
		if (a[0] == 'E' && a[1] == 'n' && a[2] == 'd') break;
		int flag = 1;
		int cnt = 0;
		int i = 0;
		while (i<=len){
			
			if (judge(a[i]) == 1){
					int sum = 0;
	  				while (judge(a[i]) == 1){
					sum = sum*10+a[i]-48;
					i++;
				}
				if (sum > 255) flag = 0;
			}
			else{
				if (a[i] != '.') flag = 0;
				i++;
		    }
		}
		if (flag == 0) printf("NO\n");
		else printf("YES\n");
	} 
}

