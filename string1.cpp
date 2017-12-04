#include<stdio.h>
#include<string.h>
int main()
{
	char stringArray[10][100];
	char targetString[100], c;
	int n, i, len, temp, lenst, sum, lentg, j, k;
	scanf("%d%c", &n, &c);
	for (i=0; i<=n-1; i++)
	{
		len=0;
		while ((stringArray[i][len++]=getchar()) != '\n');
    }
	len=0;sum=0;
	while ((targetString[len++]=getchar()) != '\n');
	for (i=0; i<=n-1; i++)
	{
		temp = 1;
	    lenst = strlen(stringArray[i]);
	    lentg = strlen(targetString);
		for(j=0; j<=lenst-1; j++)
		if (stringArray[i][j] == targetString[1])
		{
			temp = 0;
			for (k=0; k<=lentg-1; k++)
			if (stringArray[i][j+k] != targetString[j+k]) temp = 1;
		}
		if (temp == 0) sum++;
	}
	printf("%d\n", sum);
	return 0;
}
