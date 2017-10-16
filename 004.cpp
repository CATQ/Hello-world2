#include <stdio.h>
int main(){
int a,b,c,d,m,n;
    double x=0,y=0;
    scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&m,&n);
   
    
	     x=(m*d-b*n)/(a*d-b*c);
         y=(m*c-a*n)/(b*c-a*d);
         printf("x=%f,y=%f",x,y); 
   
    return 0;
}
