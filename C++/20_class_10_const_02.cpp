//making method as constant
#include<iostream>
using namespace std;
const class B
{
    public:
        void show()
        {
            cout<<"Hello."<<endl;
        }
};

class D:public B
{
    public:
        void display()
        {
            cout<<"Bye."<<endl;
        }
};
int main()
{
    D o;
    o.show();
    o.display();
    return 0;
}