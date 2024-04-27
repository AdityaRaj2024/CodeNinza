/*
    Abstract Class
    28-04-2023
*/
#include<iostream>
using namespace std;
class B
{
    public:
    void display()
    {
        cout<<"Hello  ";
    }
    virtual void show()=0;
};
class D :public B
{
    public:
    void show()
    {
        cout<<"Most  Welcome.";
    }
};
int main()
{
    D t;
    t.display();
    t.show();
    return 0;
}