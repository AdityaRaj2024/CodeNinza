//using class object into another class(public scope accessible only)
//09-05-2023
#include<iostream>
using namespace std;
class A
{
    int num;
    public:
        void getdata()
        {
            cout<<"Enter Number = ";
            cin>>num;
        }
        void putdata()
        {
            cout<<"Number :- "<<num<<endl;
        }
};
class B
{
    A T;
    public:
        void show()
        {
            T.getdata();
            T.putdata();
        }
};
int main()
{
    B p;
    p.show();  
    return 0;
}