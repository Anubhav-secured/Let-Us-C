// distance conversion
#include<stdio.h>
int main()
{
    float km,m,cm,feet,inch;
    printf("Enter the distance in Km: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("Distance in metres = %f\n",m);
    printf("Distance in cm = %f\n",cm);
    printf("Distance in feet = %f\n",feet);
    printf("Distance in inch = %f\n",inch);
    return(0);
}