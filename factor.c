#include<stdio.h>
int main()
{
    int n,factor=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
     
    }
    
    return 0;
}
