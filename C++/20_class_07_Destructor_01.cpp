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
            cout<<"Value = "<<x<<endl;
        }
        ~Test()
        {
             cout<<"Bye"<<endl;
        }
};
int main()
{
    Test t(15);
    t.show();
    return 0;
}