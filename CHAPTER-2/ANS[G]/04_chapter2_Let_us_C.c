#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    printf("enter the values of latitude and longitude of place 1: ");
    scanf("%f%f",&l1,&g1);
    printf("enter the values of latitude and longitude of place 2: ");
    scanf("%f%f",&l2,&g2);
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    g1=g1*3.14/180;
    g1=g1*3.14/180;
    float d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
    printf("The distance between place 1 and place 2 is %f",d);
    return(0);
}