#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a, const void *b){
	return *(int *)b-*(int *)a;
}
int main(){
	int n, i, j, temp;
	char s[20];
	int max = 0, sum;
	scanf("%d", &n);
	struct ScoreType{
		char name[20];
		int math;
		int eng;
		int sum;
	}stu[105];

	for (i=1; i<=n; i++){
		scanf("%s%d%d", &stu[i].name, &stu[i].math, &stu[i].eng);
		stu[i].sum = stu[i].math+stu[i].eng;
	}
	for (i=1; i<=n-1; i++){
		for (j=i; j<=n; j++){
			if (stu[i].sum <stu[j].sum){
				temp = stu[i].sum;
				stu[i].sum= stu[j].sum;
				stu[j].sum = temp;
				strcpy(s, stu[i].name);
				strcpy(stu[i].name, stu[j].name);
				strcpy(stu[j].name, s);
				 
			}
		}
	}
	for (i=1; i<=n; i++) {
		printf("%s %d", stu[i].name, stu[i].sum);
		printf("\n");
	}
}
