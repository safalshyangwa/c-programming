#include<stdio.h>
int main()
{
    int a,b,n,c;
    a=0;
    b=1;
    printf("ENter how many number do you want to generate:");
    scanf("%d",&n);
    printf("\nFIBONACII SERIES\n");
     printf("%d %d",a,b);
     for(int i=0;i<n;i++)
     {
        c=a+b;
        a=b;
        b=c;
         printf("%d\n",c);
     }
     
     return 0;
}