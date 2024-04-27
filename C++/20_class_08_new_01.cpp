#include<iostream>
using namespace std;
class test
{
    private:
    int *p;
    public:
        test()
        {
            p=new int;
        }
        void input()
        {
            cout<<"Enter No. = ";
            cin>>*p;
        }
        void show()
        {
            cout<<"Your Value = "<<*p<<endl;
        }
        ~test()
        {
            delete p;
            cout<<"Bye";
        }
};
int main()
{
    test t;
    t.input();
    t.show();
    return 0;
}