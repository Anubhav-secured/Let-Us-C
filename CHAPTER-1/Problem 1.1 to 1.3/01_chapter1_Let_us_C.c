
#include<stdio.h>
int main()
{
    float basicsalary,da,hra,grosssalary;
    printf("Enter the basic salary: ");
    scanf("%f",&basicsalary);
    da= 0.4*basicsalary;
    hra=0.2*basicsalary;
    grosssalary=da+hra+basicsalary;
    printf("Basic salary of ramesh is %f\n",basicsalary);
    printf("dearness allowence of ramesh is %f\n",da);
    printf("house rent allowence of ramesh is %f\n",hra);
    printf("gross salary of ramesh is %f\n",grosssalary);
    return(0);
}
