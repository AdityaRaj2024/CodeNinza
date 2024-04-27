#include<iostream>
using namespace std;
class T
{
    public:
    T()
    {
        cout<<"Hello "<<endl;
    }
};
class I : public T
{
    public:
    I()
    {
        cout<<"Hi.";
    }
};
int main()
{
    I t;
    return 0;
}