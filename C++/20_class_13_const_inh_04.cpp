#include<iostream>
using namespace std;
class B
{
    public:
    B()
    {
        cout<<"Hello"<<endl;
    }
};
class D : public B
{
    public:
    D(string str) : B()
    {
        cout<<str<<endl;
    }
};
int main()
{
    string s;
    cout<<"Enter Value = ";
    getline(cin,s);
    D t(s);
    return 0;
}