/***************    ANS[F](b)   ***************/
// area and perimeter of rectangle and circumference and area of circle
#include<stdio.h>
int main()
{
    float l,b,perimeter,area;
    printf("Enter the length and breath of rectangle: ");
    scanf("%f%f",&l,&b);
    perimeter=l+b;
    area=l*b;
    printf("Perimeter of rectangle is %f\n",perimeter);
    printf("area of rectangle is %f\n",area);

    float r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    float circumference=2*3.14*r;
    float areacircle=3.14*r*r;
    printf("circumference of circel is %f\n",circumference);
    printf("area of circle is %f\n",areacircle);

    return(0);
}