#include<iostream>
using namespace std;
int fact(long unsigned int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    long unsigned int a,fct;
    cout<<"Enter Any Number = ";
    cin>>a;
    fct=fact(a);
    cout<<"Factorial of "<<a<<" is :- "<<fct<<endl;
    return 0;
}