//Static method.
#include<iostream>
using namespace std;
class test
{
    private:
        int x;
        static int rec;
    public:
        void getdata();
        void putdata();
        static void showRec();
};
void test::getdata()
{
    cout<<"Enter Number = ";
    cin>>x;
    rec++;
}
void test::putdata()
{
    cout<<"Value = "<<x<<endl;
}
void test::showRec()
{
    cout<<"Rec = "<<rec<<endl;
}
int test::rec;
// test::showrec();
int main()
{
    test a,b;
    a.getdata();
    a.putdata();
    b.getdata();
    b.putdata();
    test::showRec();
    return 0;
}