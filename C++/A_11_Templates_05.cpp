//Example of class Template
#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
    private:
        T1 x;
        T2 y;
    public:
        void input()
        {
            cout<<"Enter 2 Values :- ";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"Both Values :- "<<x+y;

        }
};
int main()
{
    A a;
    a.input();
    a.show();
    return 0;
}