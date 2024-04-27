#include<stdio.h>

int main()
{
    float m1,m2,m3,m4,tm,pm;
    int rs;
    printf("Enter Marks of Four Subject:");
    rs=scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
    tm=m1+m2+m3+m4;
    pm=tm/4;
    printf("Total marks=%f\nPercentage marks=%f\nValue of rs=%d",tm,pm,rs);



    return 0;
}