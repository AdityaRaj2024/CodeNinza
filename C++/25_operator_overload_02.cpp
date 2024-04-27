//unary-operator overloading using friend function
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
        //friend void operator-(test &z);
        //friend void operator++(test &z);
        friend void operator--(test &z);
};
// void operator-(test &z)
// {
//     z.x=-z.x;
// }
// void operator++(test &z)
// {
//     z.x=z.x+1;
// }

void operator--(test &z)
{
    z.x=z.x-1;
}

int main()
{
    test t;
    t.getdata();
    t.putdata();
    // -t;
    // ++t;
    --t;
    t.putdata();    
    return 0;
}
