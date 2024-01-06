#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if( n%i==0)
        {
            c++;
        }
    }
        if(c==2)
        {
            printf("it is prime number.");
        }
        else{
            printf("it is not prime number.");
        }
    
    return 0;
}