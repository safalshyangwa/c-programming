// Take input and store in integer variable "a" and assign a value to integer "x" after both "increment prefix" and "increment postfix" and print the value of "a" and "x"for both case
#include<stdio.h>
int main()
{
    //declaring variable to store value
    int a,x;
    // Taking input from user
    printf("Enter the number: ");
    scanf("%d",&a);
    // preincrement
    x=++a;
    printf("The value of a is %d\n",a);
    printf("The value of x is %d\n",x);
    // post increment
    x=a++;
    printf("The value of a is %d\n",a);
    printf("The value of x is %d\n",x);
    return 0;
}