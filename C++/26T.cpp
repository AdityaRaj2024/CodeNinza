//WAP in C++ that follows the concept of constructor and destructor
#include<iostream>
using namespace std;
class T
{
    public:
    T()
    {
        cout<<"Hello";
    }
    ~T()
    {
        cout<<"\nBye";
    }
};
int main()
{
    T t;
    return 0;
}