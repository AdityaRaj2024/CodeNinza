//Binary-operator overloading using member function
//01-05-2023
#include<iostream>
using namespace std;
class test
{
    private:
        int x;
    public:
        void getdata()
        {
            cout<<"Enter Number = ";
            cin>>x;
        }
        void putdata()
        {
            cout<<"Value = "<<x<<endl;
        }
        test operator-(test &z)
        {
            test t;
            t.x=x-z.x;
            return t;
        }
};
int main()
{
    test a,b,c;
    a.getdata();
    b.getdata();
    a.putdata();
    b.putdata();
    c=a-b;
    c.putdata();
    return 0;
}