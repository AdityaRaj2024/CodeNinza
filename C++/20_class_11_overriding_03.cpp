/*
    date - 09-05-2023
*/
#include<iostream>
using namespace std;
class test
{
    private:
        int num;
    public:
        void input()
        {
            cout<<"Enter Number's = ";
            cin>>num;
        }
        void output()
        {
            cout<<"Your Number = "<<num<<endl;
        }
        int operator >=(test &b)
        {
            if(num>=b.num)
                return 1;
            else
                return 0;
        }
};

int main()
{
    test x,y;
    x.input();
    x.output();
    y.input();
    y.output();
    if(x>=y)
        x.output();
    else
        y.output();
    return 0;
}