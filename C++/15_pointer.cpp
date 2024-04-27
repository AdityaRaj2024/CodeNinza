#include<iostream>
using namespace std;
int main()
{
    int *p,a,b;
    cout<<"Enter Any Number = ";
    cin>>a;
    p=&a;
    cout<<"Memory address of variable 'a' is "<<&p<<endl;
    cout<<"Memory address of variable 'a' is "<<p<<endl;
    cout<<"Value of variable 'a' is "<<*p<<endl;
    cout<<"Value of variable 'a' is "<<a<<endl;
    p=p-2;
    cout<<"Memory address of variable 'a' is "<<p<<endl;
    p=p+5;
    cout<<"Memory address of variable 'a' is "<<p<<endl;

    return 0;
}