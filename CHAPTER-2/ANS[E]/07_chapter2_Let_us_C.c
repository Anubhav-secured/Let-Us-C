#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two number: ");
    scanf("%f%f",&a,&b);
    printf("before swap: a=%f b=%f\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap: a=%f b=%f",a,b);
    return(0);
}