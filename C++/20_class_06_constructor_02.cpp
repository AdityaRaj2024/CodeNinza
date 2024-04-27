#include<iostream>
using namespace std;
class test
{
    private:
    int z;
    public:
    test(int x,int y)
    {
        z=x*y;
    }
    void show()
    {
        cout<<"Multiplication = "<<z<<endl;
    }
};

int main()
{
    test t(13,7);
    t.show();
    return 0;
}