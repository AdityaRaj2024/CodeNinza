// 13. Write a program to find the greatest number amongst three given numbers by using function with parameters and return value.
#include<iostream>
using namespace std;
int great(int a,int b,int c)
{
    int gt;
    gt=a>b&&a>c?a:b>c?b:c;
    return gt;
}
int main()
{
    int l,m,n;
    cout<<"Enter 3 Number's = "<<endl;
    cin>>l>>m>>n;
    cout<<"Greatest Number = "<<great(l,m,n)<<endl;
    return 0;
}