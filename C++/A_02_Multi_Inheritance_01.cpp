//WAP in C++ to find sum of 2 numbers using multilevel inheritance.
/*#include<iostream>
using namespace std;
class A
{
    public :
        int a;
};
class B : public A
{
    public :
        int b;
};
class C : public B
{
    public :
    void Sum()
    {
        cout<<"Enter 2 Number's = "<<endl;
        cin>>a>>b;
        cout<<"Sum of 2 Number's = "<<a+b<<endl;
    }
};
int main()
{
    C s;
    s.Sum();
    return 0;
}*/

#include<iostream>
using namespace std;
class A
{
    protected :
        int a;
};
class B : protected A
{
    protected :
        int b;
};
class C : public B
{
    public :
    void Sum()
    {
        cout<<"Enter 2 Number's = "<<endl;
        cin>>a>>b;
        cout<<"Sum of 2 Number's = "<<a+b<<endl;
    }
};
int main()
{
    C s;
    s.Sum();
    return 0;
}