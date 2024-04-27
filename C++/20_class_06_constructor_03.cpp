#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    test(int z) //parameterized constructor
    {
        x=z;
    }
    test(test &m) //copy constructor
    {
        x=m.x;
    }
    void show()
    {
        cout<<"Value = "<<x<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter A Number = ";
    cin>>n;
    test a(n);
    test b(a);
    a.show();
    b.show();
    return 0;
}