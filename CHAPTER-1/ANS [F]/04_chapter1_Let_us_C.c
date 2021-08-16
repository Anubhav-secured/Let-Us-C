/***************    ANS[F](a)   ***************/
// temprature conversion
#include<stdio.h>
int main()
{
    float fr,centi;
    printf("Enter the temprature in Farenheit: ");
    scanf("%f",&fr);
    centi=5.0/9.0*(fr-32);
    printf("Temprature in centigrate id %f ",centi);
    return(0);
}