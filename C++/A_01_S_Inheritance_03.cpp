//Single Inheritance program 
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        int b;
        void in();
        int get_a();
        //void show_a();
};
class D : public A
{
    int c;
    public :
        void mul();
        void display();
};
void A :: in()
{
    a=9,b=15;
}
int A :: get_a()
{
    return a;
}
// void A :: show_a()
// {
//     cout<<"a = "<<a<<endl;
// }
void D ::  mul()
{
    c=b*get_a();
}
void D :: display()
{
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
int main(int argc, char const *argv[])
{
    D d;
    d.in();
    d.mul();
    //d.show_a();
    d.display();
    d.b=45;
    d.mul();
    d.display();
    return 0;
}
