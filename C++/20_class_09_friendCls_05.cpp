//WAP in C++ to implement friend class.
#include<iostream>
using namespace std;
class A
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        A()
        {
            x=10;
            y=20;
            z=30;
        }
        friend class B;
};
class B
{
    public:
        B(A obj)
        {
            cout<<"Private Data :- "<<obj.x<<endl;
            cout<<"Protected Data :- "<<obj.y<<endl;
            cout<<"Public Data :- "<<obj.z<<endl;
        }
};
int main()
{
    A ob;
    B ob1(ob);
    return 0;
}