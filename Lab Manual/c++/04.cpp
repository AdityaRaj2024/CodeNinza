// 4. Write a program to input any number after that check number is Armstrong or not.
#include<iostream>
#include<cmath>
using namespace std;
class Arm
{
    int a,i,c,r,n,m,s;
    void in()
    {
        cout<<"Enter a Number = ";
        cin>>a;
    }
    public:
        Arm()
        {
            in();
            c=0;
            n=a;
            s=0;
            while(a>0)
            {
                c++;
                a/=10;
            }
            a=n;
            while(a>0)
            {
                r=a%10;
                //m=pow(r,c);
                s=s+pow(r,c);;
                cout<<s<<endl;
                a=a/10;
            }
            a=n;
            cout<<"Count of "<<a<<" is "<<c<<endl;
            if(a==s)
                cout<<a<<" is an Armstrong Number.";
            else
                cout<<a<<" is not an Armstrong Number.";
        }
};
int main()
{
    Arm a;
    return 0;
}