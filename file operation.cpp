#include<stdio.h>
int main(){
	FILE *fp;
	char fileName[] = "C:\MyDownloads\Download\program\text.txt";
	char strNum[100] = {'\0'};
	char ch;
	int i = -1;
	if ((fp = fopen("text", "r")) == NULL);
	{
		printf("error!");
		return -1;
	}
	fseek (fp, i, SEEK_END);
	ch = fgetc(fp);
	while (ch != '\n'){
		i--;
		fseek(fp, i, SEEK_END);
		ch = fgetc(fp);
	}
	i = 0;
	ch = fgetc(fp);
	
}
