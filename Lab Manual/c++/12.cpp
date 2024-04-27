// 12. Write a program to find the sum of square of first n even natural numbers using function without parameter but with return type
#include<iostream>
#include<cmath>
using namespace std;
int sum()
{
    int n,s=0,i;
    cout<<"Enter Range = ";
    cin>>n;
    for(i=1;i<=n;i++)
        //s=s+i*i;
        s=s+pow(i,2);
    return s;
}
int main()
{
    cout<<"Sum of Square of numbers = "<<sum();
    return 0;
}