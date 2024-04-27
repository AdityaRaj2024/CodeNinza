/*
    11-05-2023
*/
#include<iostream>
using namespace std;
class test
{
    private:
        int x;
    public:
        void getData()
        {
            cout<<"Enter Number = ";
            cin>>x;
        }
        void putData()
        {
            cout<<"Data :- "<<x<<endl;
        }
};

int main()
{
    test *p;
    p=new test;
    p->getData();
    p->putData();
    // (*p).getData();
    // (*p).putData();
    delete p;
    return 0;
}