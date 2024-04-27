// 1. Write a program to find the roots of the quadratic equation ax2+ bx + c = 0.
#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    float d,v1,v2;
    cout<<"Enter 3 co-efficient :-\n";
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d>0)
    {
        v1=-b+sqrt(d)/2*a;
        v2=-b-sqrt(d)/2*a;
        cout<<"Root 1 = "<<v1<<"\nRoot 2 = "<<v2;
    }
    else
    {
        cout<<"Root is not possible";
    }
    return 0;
}