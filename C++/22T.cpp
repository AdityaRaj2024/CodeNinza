//WAP in c++ program that implements the concept of friend function
#include<iostream>
using namespace std;
class test
{
    private:
        int x,y;
    public:
    
        friend void in(test t);
        friend void out(test t);
};
void in(test t)
{
    cout<<"Entyer 2 numbers = ";
    cin>>t.x>>t.y;
}
void out(test t)
{
    cout<<t.x<<endl<<t.y;
}

int main()
{
    test t;
    in(t);
    out(t);
    return 0;
}