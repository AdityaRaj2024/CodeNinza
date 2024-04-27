//friend function
//find lcm and hcf of 3 numbers. implement friend function
#include<iostream>
using namespace std;
class Gcd
{
    private:
        int x,y,z,l,h;
        void in()
        {
            cout<<"Enter 3 Number's :- "<<endl;
            cin>>x>>y>>z;
        }
        void get()
        {
            l=x>y && x>z ?x: y>z?y:z;
            h=x<y && x<z ?x: y<z?y:z;
            while(l%x!=0 || l%y!=0 || l%z!=0)
                l++;
            while(x%h!=0 || y%h!=0 || z%h!=0)
                h--;
        }
    public:
        friend void show(Gcd o);

};
void show(Gcd o)
{
    o.in();
    o.get();
    cout<<"L.C.M. of "<<o.x<<" , "<<o.y<<" and "<<o.z<<" is :- "<<o.l<<endl;
    cout<<"H.C.F. of "<<o.x<<" , "<<o.y<<" and "<<o.z<<" is :- "<<o.h<<endl;
}
int main()
{
    Gcd ob1;
    show(ob1);
    return 0;
}