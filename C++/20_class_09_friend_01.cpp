//Friend Function
#include<iostream>
using namespace std;
class Test
{
    private:
        int x;
    public:
        Test(int z)
        {
            x=z;
        }
        void show()
        {
            cout<<"Number = "<<x<<endl;
        }
        friend void display (Test t);
};

void display(Test t)
{
    t.show();
    cout<<"Data = "<<t.x;
}
int main()
{
    Test m(18);
    display(m);
    return 0;
}