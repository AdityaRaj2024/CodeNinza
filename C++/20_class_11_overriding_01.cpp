#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout<<"Hello."<<endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        cout<<"Hi."<<endl;
    }
};
int main()
{
    Derived der;
    der.show();
    return 0;
}

/*#include <iostream>
using namespace std;
class parent_class
{
    public:
    virtual void print()
    {
        cout << "This is print() method of BaseClass"<<endl;
    }
};
class derived_class : public parent_class
{
    public:
    // Function Overriding - new definition of
    // print method of base class
    void print()
    {
        cout << "This is print() method of the Derived Class"<<endl;
    }
};
int main()
{
    derived_class obj;
    obj.print();
}*/


/*#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout<<"Hello."<<endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        cout<<"Hi."<<endl;
    }
};
int main()
{
    Derived der;
    der.show();
    return 0;
}*/