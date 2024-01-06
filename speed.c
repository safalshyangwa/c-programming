// speed calculation
#include<stdio.h>
int main()
{
    int t,s,d;
    printf("Enter distance(in kms):");
    scanf("%d",&d);
    printf("Enter the time(in hrs):");
    scanf("%d",&t);
    s=d/t;
    printf("speed is %d(km/hr)",s);
    return 0;
}