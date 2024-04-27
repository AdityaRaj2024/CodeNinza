#include<stdio.h>

void main()
{
    int year;
    printf("Enter any Year:");     
    scanf("%d",&year);
    year%4==0 && year%100!=0?printf("%d is leep year",year):printf("%d is not a leep year",year);



}