// aggregate and percentage marks of student 
#include<stdio.h>
int main()
{
    int marks[5],aggr=0;
    float percentage;
    for(int i=0;i<5;i++)
    {
        printf("Enter the marks in subject %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        aggr+=marks[i];
    }
    percentage=aggr/5.0;
    printf("Aggregate marks of the Student is %d\n",aggr);
    printf("percentage of the Student is %f\n",percentage);
    
    return(0);
} 