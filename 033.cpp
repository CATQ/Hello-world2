#include<stdio.h>
#include<string.h>  
int main( )
{
        char s1[100],s2[100]; 
        int i,j=0; 
      gets(s1); 
    gets(s2); 
        for(i=0;(s1[i]!='\0')&&(s2[i]!='\0');i++) 
        { 
                j=s1[i]-s2[i]; 
           if(j!=0) 
            break;
       } 
         
        if((s1[i]=='\0')&&(s2[i]=='\0')) 
         printf("%d\n",j); 
        else 
             printf("%d\n",s1[i]-s2[i]); 
}  
