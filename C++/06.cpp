// 6. Write a program to calculate the compound interest using the formula A = P × (1 + r/100)n.
#include<iostream>
using namespace std;
class Intrest
{
    protected:
        float p,r,n,a;
        void in()
        {
            cout<<"Enter Principal Amount = ";
            cin>>p;
            cout<<"Enter Interest Rate = ";
            cin>>r;
            cout<<"Enter Number of time intrest applied per year = ";
            cin>>n;
        }
    public:
        Intrest()
        {
            in();
            a=p*(1+r/100)*n;
            cout<<"Total Amount = "<<a<<endl;
        }
};
int main()
{
    Intrest in;
    return 0;
}