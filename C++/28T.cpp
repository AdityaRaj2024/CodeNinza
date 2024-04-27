#include<iostream>
using namespace std;
class f
{
    private:
    int n;
    public :
    f()
    {
      n=10;
    }
    friend class A;
};
class A
{
    public:
    A(f ff)
    {
        cout<<ff.n;
    }
};
int main()
{
    f ff;
    A a(ff);
    return 0;
}