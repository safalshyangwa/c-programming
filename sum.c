// wap to take two integer number as input  from the user and show the sum of the number as result
#include<stdio.h>
int main()
{
    int firstn1,secondn2;
    int sum;
    printf("Enter the first number: ");
    scanf("%d",&firstn1);
    printf("Enter the second number: ");
    scanf("%d",&secondn2);
     sum = firstn1 + secondn2;
     printf("The sum of %d + %d=%d",firstn1,secondn2,sum);
     return 0;
}