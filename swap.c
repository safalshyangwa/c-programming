// swap without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number1: ie a");
    scanf("%d",&a);
    printf("Enter the number2: ie b");
    scanf("%d",&b);
    printf("value of a and b before swaping variable a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\value of a and b after swaping variable a=%d,b=%d",a,b);
    return 0;
}