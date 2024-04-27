//making method as constant
#include<iostream>
using namespace std;
class B
{
    public:
        const virtual void show()
        // virtual void show() const
        {
            cout<<"Hello.";
        }
};

class D:public B
{
    public:
        void show()
        {
            cout<<"Bye.";
        }
};

int main()
{
    D o;
    o.show();
    return 0;
}
