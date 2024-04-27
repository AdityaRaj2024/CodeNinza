//default constructor
#include<iostream>
using namespace std;
class test
{
    private:
    int x,y;
    public:
    test()
    {
        x=12;
        y=8;
    }
    void show()
    {
        cout<<"Multiplication = "<<x*y<<endl;
    }
};

int main()
{
    test t;
    t.show();
    return 0;
}