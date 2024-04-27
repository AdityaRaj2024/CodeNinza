//Binary-operator overloading using friend function
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
        //friend test operator+(test &y, test &z);
        friend test operator*(test &y, test &z);
};
// test operator+(test &y,test &z)
// {
//     test t;
//     t.x=y.x+z.x;
//     return t;
// }
test operator*(test &y,test &z)
{
    test t;
    t.x=y.x*z.x;
    return t;
}

int main()
{
    test a,b,c;
    a.getdata();
    b.getdata();
    a.putdata();
    b.putdata();
    c=a*b;
    c.putdata();
    return 0;
}