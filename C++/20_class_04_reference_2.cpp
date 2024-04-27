#include<iostream>
using namespace std;
class Reference
{
    private:
        int x,y;
        int &p = x;
        int &q = y;
    public:
        void input()
        {
            cout<<"Enter Two Number's = "<<endl;
            cin>>x>>y;
        }
        void output()
        {
            cout<<"Addition = "<<x+y<<endl;
            cout<<"Subtraction = "<<p-q<<endl;
            cout<<"Memory Address of Actual Variable = "<<&x<<endl;
            cout<<"Memory Address of Reference Variable = "<<&p<<endl;
        }
};
int main()
{
    Reference ref;
    ref.input();
    ref.output();
    return 0;
}