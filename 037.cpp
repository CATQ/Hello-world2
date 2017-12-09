#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("2\n");
			break;
		case 2:
			printf("5\n");break;
		case 3:
			printf("1\n");break;
	    case 4:
	    	printf("7\n");break;
	    case 5:
	    	printf("2\n");break;
	    case 6:
	    	printf("3\n");break;
		case 7:
			printf("0\n");break;
	}
	if ((n<=0) || (n>=8))printf("Input Error\n"); 
}
