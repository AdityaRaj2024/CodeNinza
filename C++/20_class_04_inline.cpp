/*#include<iostream>
using namespace std;
class test
{
    private:
        int x,y;
    public:
        //void input()
        inline void input()
        {
            cout<<"Enter 2 Numbers :-"<<endl;
            cin>>x>>y;
        }
        //void show()
        inline void show()
        {
            cout<<"Sum = "<<x+y;
        }
};
int main(int argc, char const *argv[])
{
    test t;
    t.input();
    t.show();
    return 0;
}*/

#include<iostream>
using namespace std;
class test
{
    private:
        int x,y;
    public:
        inline void input();
        inline void show();
};
inline void test::input()
{
    cout<<"Enter 2 Numbers :-"<<endl;
    cin>>x>>y;
}
inline void test::show()
{
    cout<<"Sum = "<<x+y;
}
int main(int argc, char const *argv[])
{
    test t;
    t.input();
    t.show();
    return 0;
}
