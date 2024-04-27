/*
    17-05-2023
    Example of Exception handling
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        cout<<"Enter two number's = "<<endl;
        cin>>a>>b;
        if(b==0)
            throw b;
        cout<<"Division = "<<a/b;
    }
    catch(int z)
    {
        cout<<"Value of b = "<<z<<endl;
        cout<<"Enter Number = ";
        cin>>z;
        cout<<"Division = "<<a/z;
    }
    return 0;
}