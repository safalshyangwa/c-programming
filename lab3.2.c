// wap to imput seconds and convets it into input seconds and convets into hours ,minutes and seconds;
#include<stdio.h>
int main()
{
    int sec;
    int hour,min;
    printf("Enter the second :");
    scanf("%d",&sec);
    hour=(sec/3600)%3600;
    
    min=(sec/60)%60;
    sec=(sec-hour*3600-min*60);
    printf("The time is= %d:%d:%d",hour,min,sec);
    return 0;
    
    
}
