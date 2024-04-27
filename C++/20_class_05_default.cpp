#include<iostream>
using namespace std;
class test
{
    public:
    void sum(int x,int y=0,int z=1)
    {
        cout<<"Sum = "<<(x+y+z)<<endl;
    }
    void sum(float x, float y=0,float z=1.5)
    {
        cout<<"Sum = "<<(x+y+z)<<endl;
    }
};
int main()
{
    test t;
    t.sum(20);
    t.sum(20,30);
    t.sum(20,30,40);
    t.sum(20.8f);
    t.sum(20.8f,30.6f);
    t.sum(20.8f,30.6f,40.4f);
    return 0;
}