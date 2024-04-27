//WAP in c++ to find sum of 2 numbers using function templates
#include<iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    return a+b;
}

int main()
{
    int m=10,n=12;
    float p=20.5,q=84.6;
    char s='a',t=1;
    // char s='A',t=' ';
    cout<<"sum= "<<sum(m,n)<<endl;
    cout<<"sum= "<<sum(p,q)<<endl;
    cout<<"sum= "<<sum(s,t)<<endl; // return value according to ASCII value
    return 0;
}