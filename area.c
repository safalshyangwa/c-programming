// Define PI as the symboli constant and take radius as input from the user and calculate the area of circle
#include<stdio.h>
#define PI 3.14
#include<Math.h>
int main()
{
    // Declaring variables to store value.
    int radius,area;
    // Taking input form the user.
    printf("Enter the radius: ");
      scanf("%d",&radius);
      //calculating the area 
      area=PI*pow(radius,2);
      // output or printing the area.
      printf("The area of circle is %d",area);
      return 0;
}