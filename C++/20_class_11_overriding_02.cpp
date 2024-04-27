/*
    date - 09-05-2023
*/
/*#include<iostream>
#include<string.h>
using namespace std;
class test
{
    private:
        char str[30];
    public:
        void input()
        {
            cout<<"Enter String = ";
            cin>>str;
        }
        void output()
        {
            cout<<"Entered String = "<<str<<endl;
        }
        test operator + (test &b)
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
}*/

#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void show()
        {
            cout<<"Base Class"<<endl;
        }
};
class Derived:public Base
{
    public:
        void show()
        {
            cout<<"Derived Class"<<endl;
        }
};
int main()
{
    Base *p;
    Base b;
    p=&b;
    p->show();
    Derived  d;
    p=&d;
    p->show();
    return 0;
}