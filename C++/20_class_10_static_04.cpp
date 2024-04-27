//static method
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int area,peri;
        static int l,b;
    public:
        static void input()
        {
            cout<<"Enter Length And Breadth Of Rectangle :- "<<endl;
            cin>>l>>b;
        }
        void findarea()
        {
            area=(l*b);
        }
        void findperi()
        {
            peri=2*(l+b);
        }
        ~Rectangle()
        {
            cout<<"Area of Rectangle :- "<<area<<endl;
            cout<<"Perimeter of Rectangle :- "<<peri<<endl;
        }
};
int Rectangle::l;
int Rectangle::b;
int main()
{
    Rectangle rec;
    Rectangle::input();
    rec.findarea();
    rec.findperi();
    return 0;
}