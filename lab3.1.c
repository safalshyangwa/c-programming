//  wap to input name age and salary and print them on screen
#include<stdio.h>
#include<string.h>
int main()
{
int salary ,age;
char name[20];
printf("Enter the name of empoloyee :");
gets(name);
printf("Name :%s\n ",name);
printf("Enter the age :");
scanf("%d",&age);
printf("age : %d\n",age);
printf("Enter the salary :");
scanf("%d",&salary);
printf("salary  : %d",salary);
return 0;

}