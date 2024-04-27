#include<iostream>
using namespace std;
class Base1
{
    public:
        void input()
        {
            cout<<"Hello-Base class 1"<<endl;
        }
};
class Base2
{
    public:
        void input()
        {
            cout<<"Hi-Base class 2"<<endl;
        }
};
// class Derived : public Base1, public Base2
// {
//     public:
//         void input()
//         {
//             Base1::input();
//             Base2::input();
//         }
// };
class Derived : public Base1, public Base2
{};
int main()
{
    Derived ob1;
    //ob1.input()
    ob1.Base1::input();
    ob1.Base2::input();
    //ob1.input();
    return 0;
}