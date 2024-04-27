#include<iostream>
using namespace std;
class A
{
    public:
        virtual void show()
        {
            cout<<"Hello";
        }
};
class B : public A
{
    public:
        virtual void show()
        {
            cout<<"Hi";
        }
};
class C : public B
{
    public:
        void show()
        {
            cout<<"Bye";
        }
};
int main()
{
    C obj;
    obj.show();
    // B::obj.show();
    return 0;
}