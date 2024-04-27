#include<iostream>
using namespace std;
class T
{
    public:
void hello()
{
    cout<<"hello";
}
void hello(int a)
{
    cout<<a;
}
};
int main()
{
    T a;
    a.hello();
    a.hello(4);
    
    return 0;
}