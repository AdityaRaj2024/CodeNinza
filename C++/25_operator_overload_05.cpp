#include<iostream>
#include<string.h>
using namespace std;
class test
{
    private:
        char str[20];
    public:
        void input()
        {
            cout<<"Enter String = ";
            cin>>str;
        }
        void output()
        {
            cout<<"Your String :- "<<str<<endl;
        }
        test operator +(test &b)
        {
            test z;
            strcat(str,b.str);
            strcpy(z.str,str);
            return z;
        }
};

int main()
{
    test x,y,p;
    x.input();
    x.output();
    y.input();
    y.output();
    p=x+y;
    p.output();
    return 0;
}