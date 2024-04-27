//Wap in c++ that define an inline function;
#include<iostream>
using namespace std;
class test
{
    private:
        int x;
    public:
        void in();
        void show();
};
inline void test::in()
{
    cout<<"Enter Any Number = ";
    cin>>x;
}
inline void test::show()
{
    cout<<"output = "<<x;
}
int main()
{
    test t;
    t.in();
    t.show();
    return 0;
}