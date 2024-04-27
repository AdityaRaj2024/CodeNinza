#include<iostream>
using namespace std;
class test
{
    private:
    int x,y,z;
    public:
    test()
    {
        x=12;
        y=8;
    }
    test(int a,int b)
    {
        z=a+b;
    }
    void disp()
    {
        cout<<"Multiplication = "<<x*y<<endl;
    }
    void show()
    {
        cout<<"Addition = "<<z<<endl;
    }
};

int main()
{
    test t(13,7);
    test m;
    m.disp();
    t.show();
    return 0;
}