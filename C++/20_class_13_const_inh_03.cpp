#include<iostream>
using namespace std;
class B
{
    public:
    B(string s)
    {
        cout<<s<<endl;
    }
};
class D : public B
{
    public:
    D(string str) : B("Hello")
    {
        cout<<str<<endl;
    }
};

int main()
{
    // string s;
    // cout<<"Enter Value = ";
    // getline(cin,s);
    // D t(s);
    D t("Hi");
    return 0;
}