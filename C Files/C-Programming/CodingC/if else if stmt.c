#include<stdio.h>

void main()
{
    float pm;
    printf("Enter Your Percentage Marks:");
    scanf("%f",&pm);
    
    if(pm>=90)
    printf("Excellent");
    else if(pm>=75)
    printf("Very Good");
    else if(pm>=60)
    printf("Good");
    else if(pm>=45)
    printf("Average");
    else
    printf("Fail");
    



}