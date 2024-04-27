// 8. Write a program to generate Fibonacci series using recursion
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n,t;
    cout<<"Enter Number of Terms = ";
    cin>>t;
    for(n=0;n<t;n++)
        cout<<"Term "<<n+1<<"= "<<fib(n)<<"\n\a";
    return 0;
}