//WAP in C++  to implements the concept of static data
#include<iostream>
using namespace std;
class test
{
    private:
        int x;
        static int a;
    public:
        void input()
        {
            a++;
            cout<<"Enter Number = "<<endl;
            cin>>x;
        }
        void show()
        {
            cout<<"Value = "<<x<<endl;
            cout<<"Static Value = "<<a<<endl;
        }
};
int test::a;
int main()
{
    test t;
    t.input();
    t.show(); 
    return 0;
}