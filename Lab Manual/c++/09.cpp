// 9. Write a program to apply arithmetic operators to two given values and display the result using function with parameters.
#include<iostream>
using namespace std;
void arith(int a,int b)
{
    int sum,sub,multi,div,mod;
    cout<<"Enter 2 Number's = "<<endl;
    cin>>a>>b;
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;
    cout<<"Sum = "<<sum<<"\nSub = "<<sub<<"\nMuliplication = "<<multi<<"\nDivision = "  <<div<<"\nRemainder = "<<mod<<endl;
}
int main()
{
    int a,b;
    arith(a,b);
    return 0;
}