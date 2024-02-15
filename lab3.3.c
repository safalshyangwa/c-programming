// wap to convert temperature in centigrade(c) to fahrenheit(f)
#include<stdio.h>
int main()
{
    int centigrade;
    double fahrenheit;
    printf("Enter the temperature of centigrade :");
    scanf("%d",&centigrade);
    fahrenheit=1.8*centigrade + 32;
    printf("The temperature in fahrenheit is : %lf\n",fahrenheit);
    printf("The temperature in fahrenheit is : %d",(int)fahrenheit);
    return 0;

}