#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    printf("enter the value angle: ");
    scanf("%f",&x);
    x=x*3.14/180;
    float a,b,c,d,e,f;
    a=sin(x);
    b=cos(x);
    c=tan(x);
    
    printf("The value of sin(x) is %f\n",a);
    printf("The value of cos(x) is %f\n",b);
    printf("The value of tan(x) is %f\n",c);
    printf("The value of cosec(x) is %f\n",1/a);
    printf("The value of sec(x) is %f\n",1/b);
    printf("The value of cot(x) is %f\n",1/c);
    return(0);
}