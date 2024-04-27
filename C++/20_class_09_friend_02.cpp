//friend function
#include<iostream>
using namespace std;
class Test2;
class Test1
{
    private:
    int x;
    public:
    Test1(int z)
    {
        x=z;
    }
    friend void max (Test1 t1, Test2 t2);
};

class Test2
{
    private:
        int x;
    public:
        Test2(int z)
        {
            x=z;
        }
        friend void max (Test1 t1, Test2 t2);
};
void max(Test1 t1,Test2 t2)
{
   if(t1.x>t2.x)
    {
        cout<<t1.x<<endl;
    }
   else
    {
        cout<<t2.x<<endl;
    }
}
int main()
{
    Test1 a(18);
    Test2 b(28);
    max(a,b);
    return 0;
}