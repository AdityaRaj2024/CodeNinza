#include<iostream>
using namespace std;
class Array
{
    public:
        Array()
        {
            cout<<"Constructor of class is called."<<endl;
        }
        ~Array()
        {
            cout<<"Destructor of class is called."<<endl;
        }
};
int main()
{
    Array* a = new Array[2];
    delete[] a;
    return 0;
}