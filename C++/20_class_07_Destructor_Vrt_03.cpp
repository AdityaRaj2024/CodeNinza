//Example of virtual distructor
#include<iostream>
using namespace std;
class Base
{
    public:
        // ~Base() // only base class distructor is called. so it create memory leak situation.
        virtual ~Base() // to call the virtual class  distructor,we must make base class distructor as virtual.
        {
            cout<<"Hello"<<endl;
        }
};
class Derived : public Base
{
    public:
        ~Derived()
        {
            cout<<"Hi"<<endl;
        }
};
int main()
{
    Base *ptr = new Derived();
    delete ptr;
    return 0;
}