#include<stdio.h>
#include<math.h>
int main()
{
    float t,v;
    printf("Enter the value of temprature and velocity: ");
    scanf("%f%f",&t,&v);
    float wcf=35.74+.6215*t+(.4275*t-35.75)*pow(v,0.16);
    printf("The value of wind chill factor is %f",wcf);
    return(0);
}