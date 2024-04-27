#include<stdio.h>

void main()
{
    float l,b,ar,pm;
    printf("Enter Length and Breadth:");
    scanf("%f%f",&l,&b);
    
    ar=l*b;
    pm=2*(l+b);
    l>0 && b>0?printf("Area of Rectangle =%f\nPerimeter of Rectangle=%f",ar,pm):printf("Invalid Input\n");




}