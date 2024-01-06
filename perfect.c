// To check whether given nymber is perfect number or not.
#include<stdio.h>
int main()
{
    int n,sum=0;
    int i=1;
    printf("enter the number :");
    scanf("%d",&n);
 while(i<n)
    {
        if(n%i==0)
        {
            sum+=i;
            i++;
            
        }
        if(sum==n)
        {
            printf("GIven number is perfect.",i);
        }
        else
        {
            printf("it is not perfect number.",i);
        }
    }
    return 0;
}