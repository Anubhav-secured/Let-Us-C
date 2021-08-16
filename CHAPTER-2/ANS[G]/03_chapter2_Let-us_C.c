#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Enter the x dimension of point: ");
    scanf("%f",&x);
    printf("Enter the y dimension of point: ");
    scanf("%f",&y);
    float r,theta;
    r=sqrt(x*x+y*y);
    theta=atan2(y,x);
    printf("The value of r is: %f\nThe value of theta is: %f",r,theta);

    return(0);
}