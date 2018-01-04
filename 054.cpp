#include<stdio.h>
#include<string.h>
int main(){
	struct Numbers{
		char row1[6];
		char row2[6];
		char row3[6];
		char row4[6];
		char row5[6];
		char row6[6];
		char row7[6];
	};
	struct Numbers num[10];
	strcpy(num[0].row1,"*****");
	strcpy(num[1].row1,"    *");
	strcpy(num[2].row1,"*****");
	strcpy(num[3].row1,"*****");
	strcpy(num[4].row1,"*   *");
	strcpy(num[5].row1,"*****");
	strcpy(num[6].row1,"*****");
	strcpy(num[7].row1,"*****");
	strcpy(num[8].row1,"*****");
	strcpy(num[9].row1,"*****");
	strcpy(num[0].row2,"*   *");
	strcpy(num[1].row2,"    *");
	strcpy(num[2].row2,"    *");
	strcpy(num[3].row2,"    *");
	strcpy(num[4].row2,"*   *");
	strcpy(num[5].row2,"*    ");
	strcpy(num[6].row2,"*    ");
	strcpy(num[7].row2,"    *");
	strcpy(num[8].row2,"*   *");
	strcpy(num[9].row2,"*   *");
	strcpy(num[0].row3,"*   *");
	strcpy(num[1].row3,"    *");
	strcpy(num[2].row3,"    *");
	strcpy(num[3].row3,"    *");
	strcpy(num[4].row3,"*   *");
	strcpy(num[5].row3,"*    ");
	strcpy(num[6].row3,"*    ");
	strcpy(num[7].row3,"    *");
	strcpy(num[8].row3,"*   *");
	strcpy(num[9].row3,"*   *");
	strcpy(num[0].row4,"*   *");
	strcpy(num[1].row4,"    *");
	strcpy(num[2].row4,"*****");
	strcpy(num[3].row4,"*****");
	strcpy(num[4].row4,"*****");
	strcpy(num[5].row4,"*****");
	strcpy(num[6].row4,"*****");
	strcpy(num[7].row4,"    *");
	strcpy(num[8].row4,"*****");
	strcpy(num[9].row4,"*****");
	strcpy(num[0].row5,"*   *");
	strcpy(num[1].row5,"    *");
	strcpy(num[2].row5,"*    ");
	strcpy(num[3].row5,"    *");
	strcpy(num[4].row5,"    *");
	strcpy(num[5].row5,"    *");
	strcpy(num[6].row5,"*   *");
	strcpy(num[7].row5,"    *");
	strcpy(num[8].row5,"*   *");
	strcpy(num[9].row5,"    *");
	strcpy(num[0].row6,"*   *");
	strcpy(num[1].row6,"    *");
	strcpy(num[2].row6,"*    ");
	strcpy(num[3].row6,"    *");
	strcpy(num[4].row6,"    *");
	strcpy(num[5].row6,"    *");
	strcpy(num[6].row6,"*   *");
	strcpy(num[7].row6,"    *");
	strcpy(num[8].row6,"*   *");
	strcpy(num[9].row6,"    *");
	strcpy(num[0].row7,"*****");
	strcpy(num[1].row7,"    *");
	strcpy(num[2].row7,"*****");
	strcpy(num[3].row7,"*****");
	strcpy(num[4].row7,"    *");
	strcpy(num[5].row7,"*****");
	strcpy(num[6].row7,"*****");
	strcpy(num[7].row7,"    *");
	strcpy(num[8].row7,"*****");
	strcpy(num[9].row7,"*****");
	int k, i, j, m, an, x, temp = 10;
	int a[5],b[5];
	scanf("%d", &k);
	for (i=1; i<=k; i++){
		scanf("%d", &m);
		printf("%d:\n", m);
		an = 0;
		if (m == 0) {
			an = 1;
			b[an] = 0;
		}
		while (m !=0 ){
			an++;
			b[an] = m%10;
			m = m/10;
		}
		for (j=1; j<=an; j++) {
			a[an-j+1] = b[j]; 
		}
		x = 1;
		while (x<=7){
			if (x == 1){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row1);
				}
				printf("%s\n", num[a[an]].row1);
			}
			else if (x == 2){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row2);
				}
				printf("%s\n", num[a[an]].row2);	
			}
			else if (x == 3){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row3);
				}
				printf("%s\n", num[a[an]].row3);	
			}
			else if (x == 4){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row4);
				}
				printf("%s\n", num[a[an]].row4);	
			}
			else if (x == 5){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row5);
				}
				printf("%s\n", num[a[an]].row5);	
			}
			else if (x == 6){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row6);
				}
				printf("%s\n", num[a[an]].row6);	
			}
			else if (x == 7){
				for (j=1; j<=an-1; j++){
					printf("%s  ", num[a[j]].row7);
				}
				printf("%s\n", num[a[an]].row7);	
			}
			x++;
		}
	}
}
