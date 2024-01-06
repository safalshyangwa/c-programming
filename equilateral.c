// find the area of equilateral traingle
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float area;
    printf("Enter the side of traingle:");
    scanf("%d",&a);
    area=(float)(sqrt(3)*(a*a))/4;
    printf("\n Aera of Equilateral Triangle:%.2f",area);
    return 0;
}