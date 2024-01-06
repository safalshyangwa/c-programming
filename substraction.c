// substraction without using '-' operator
// subtracting a number (num2) from another number(num1) without using '-' operator
// for this ,we can add 2's complement of num 2 to num1 
// 2's complement of num2=> negation of num2 + 1,i.e(~num2 + 1)
#include<stdio.h>
int main()
{
    int n1,n2;
    int sub;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);
    sub=n1 +(~n2+1);// num1 + 2's complement of num2
    printf("Result of (%d)-(%d)is %d",n1,n2,sub);
    return 0;
}
