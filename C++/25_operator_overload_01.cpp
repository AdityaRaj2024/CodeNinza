//unary-operator overloading using member function
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
        void operator-();
        // {
        //     x=-x;
        // }
};
void test ::operator-()
{
    x=-x;
}
int main()
{
    test t;
    t.getdata();
    t.putdata();
    -t;
    t.putdata();    
    return 0;
}