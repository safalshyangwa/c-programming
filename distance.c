//calculate the distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
    // Declaring variable
    int x1,x2,y1,y2;
    float distance;
    //introduction
    printf("Name: safal shyangwa\n");
    printf("Roll no: 11\n");
    

    // taking input
    printf("enter the x1\n:");
    scanf("%d",&x1);
    printf("enter the x2\n:");
    scanf("%d",&x2);
    printf("enter the y1\n:");
    scanf("%d",&y1);
    printf("enter the y2\n:");
    scanf("%d",&y2);
    distance=(float) pow(x2-x1,2)+pow(y2-y1,2);
    printf("The distance between two points is %f",sqrt(distance));
    return 0;

}