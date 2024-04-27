 //Single Inheritance program - for sum of 2 numbers.
#include<iostream>
using namespace std;
class A
{
   
    protected :
        int a;
};
class B : public A
{
    protected :
        int b;
    public :
        void in();
        void out();
};
void B::in()
{
    cout<<"Enter 2 Number's :- "<<endl;
    cin>>a>>b;
}
void B::out()
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
}
int main()
{
    B obj;
    obj.in();
    obj.out();
    return 0;
}