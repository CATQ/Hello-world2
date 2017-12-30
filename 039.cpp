#include<stdio.h>
#include<math.h>
int main(){
	char hex1[6];
    int x;  
	scanf("%s", &hex1);
	int sum = 0;
	for (int i=2; i<6; i++){
		x = hex1[i]>='a'?hex1[i]-87:hex1[i]-48;
		sum = sum*16+x;
	}
	printf("%d", sum);
	return 0;
}
