#include<stdio.h>
#include<math.h>
void judge(float x, float y)
{
	if ((fabs(x-y))<0.000001) printf("yes");
	else printf("NO");
}
int main ()
{
	float x,y;
	scanf("%f%f", &x, &y);
	judge(x,y);
	return 0;
}
 
