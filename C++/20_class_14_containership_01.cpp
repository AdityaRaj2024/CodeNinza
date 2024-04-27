//Example of containership - 09-05-2023
#include<iostream>
using namespace std;
class test
{
    public:
        void show()
        {
            cout<<"Hello"<<endl;
        }
        void disp()
        {
            show(); ///nesting of methods
            cout<<"Hi";
        }
};
int main()
{
    test t;
    t.disp(); 
    return 0;
}