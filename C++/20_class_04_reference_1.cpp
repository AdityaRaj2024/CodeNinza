#include<iostream>
using namespace std;
int main()
{
    int a;
    int &x = a;
    cout<<"Enter Any Number = ";
    cin>>a;
    cout<<"The Variable = "<<a<<endl;
    cout<<"The Reference Variable  = "<<x<<endl;
    a=a+10;
    cout<<"After Performing Addition :- "<<endl;
    cout<<"The Variable = "<<a<<endl;
    cout<<"The Reference Variable  = "<<x<<endl;
    x=x*2;
    cout<<"After Performing Multiplication :- "<<endl;
    cout<<"The Variable = "<<a<<endl;
    cout<<"The Reference Variable  = "<<x<<endl;
    return 0;
}