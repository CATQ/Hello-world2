#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char a[32];
char b[32];
int judge(char c){
	if (c-48 >=0 && c-48<=9) return(true);
	else return(false);
}
int main(){
	while (scanf("%s", &a) != EOF){
		int len = strlen(a);
		if (a[0] == 'E' && a[1] == 'n' && a[2] == 'd') break;
		int flag = 1;
		int cnt = 0;
		int i = 0;
		int sum1 = 0, sum2 = 0;
		printf("%d", len);
		while (i<=len-1){
			if (cnt == 0){
				cnt = 1;
				int temp = 0;
				if (judge(a[i])){
	 				while (judge(a[i])){
						temp = temp*10+(a[i]-48);
						i++;
					}
					sum1++;
					if (temp>255) flag = 0;  
				}	
				else {
					flag = 0; i++; continue;
				}
				 
			}	
			else{
				cnt = 0;
				if (a[i] != '.') {
					flag = 0; i++; continue;
				}
				else sum2++;  
				i++;
			}
		} 
		if (sum1 != 4 || sum2 != 3) flag = 0;
		if (flag == 1) printf("YES\n");
		else printf("NO\n");
	}
}
