#include<iostream>
using namespace std;
class A
{
    public:
    A(string s)
    {
        cout<<s<<endl;
    }
};
class I : public A
{
    public:
    I() : A("Hello")
    {
        cout<<"Hi"<<endl;
    }
};
int main()
{
    I t;
    return 0;
}
