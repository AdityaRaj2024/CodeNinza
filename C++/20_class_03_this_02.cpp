#include<iostream>
using namespace std;
class Test
{   
    private:
        int x,y;
    public:
        Test(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        Test &setX(int a)
        {
            x=a;
            return *this;
        }
        Test &setY(int b)
        {
            y=b;
            return *this;
        }
        ~Test()
        {
            cout<<"x = "<<x<<endl<<"Y :- "<<y<<endl;
        }
};
int main()
{
    Test ob1(5,15);
    ob1.setX(10);
    ob1.setY(30);
    return 0;
}