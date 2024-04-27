// 7. Write a program to calculate the factorial of a given number using recursion.
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter Any Number = ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    return 0;
}