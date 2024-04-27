#include<iostream>
using namespace std;
class f
{
    public :
    int n;
    f(int nn)
    {
        n=nn;
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial"<<fact;
    }
};
int main()
{
    f ff(5);
    return 0;
}