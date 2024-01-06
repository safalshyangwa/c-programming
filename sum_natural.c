//write a program of sum of first five natural number.
#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number:");
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum + i;
    }
    printf(" sum is %d",sum);
    return 0;
}