/*#include<iostream>
using namespace std;
class Test
{
    private:
    int x;
    static int rec;
    public:
    void getdata()
    {
        rec++;
        cout<<"Enter Number = ";
        cin>>x;
    }
    void putData()
    {
        cout<<"Value = "<<x<<endl;
    }
    void showData()
    {
        cout<<"Record = "<<rec<<endl;
    }
};
int Test::rec;
int main()
{
    Test a,b;
    a.getdata();
    b.getdata();
    a.putData();
    b.putData();
    a.showData();
    b.showData();
    return 0;
}*/


#include<iostream>
using namespace std;
class Test
{
    private:
    int num;
    static int rec;
    public:
    void getdata()
    {
        rec++;
        cout<<"Enter Number = ";
        cin>>num;
    }
    void putData()
    {
        cout<<"Value = "<<num<<endl;
    }
    void showData()
    {
        cout<<"Record = "<<rec<<endl;
    }
};
int Test::rec;
int main()
{
    Test a,b;
    a.getdata();
    b.getdata();
    a.putData();
    b.putData();
    // a.showData();
    b.showData();
    return 0;
}