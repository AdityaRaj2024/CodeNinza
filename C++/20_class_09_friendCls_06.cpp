//WAP in C++ to find area of rectangle . Implement friend class
#include<iostream>
using namespace std;
class Input
{
    private:
        int l,b,ara,peri;
        void get()
        {
            cout<<"Enter Length and Breadth :- "<<endl;
            cin>>l>>b;
        }
        void area()
        {
            ara=l*b;
        }
        void perimeter()
        {
            peri=2*(l+b);
        }
        friend class Output;
};
class Output
{
    public:
        void show(Input inp)
        {
            inp.get();
            inp.area();
            inp.perimeter();
            cout<<"Area :- "<<inp.ara<<endl;
            cout<<"Perimeter :- "<<inp.peri<<endl;
        }
};
int main()
{
    Input inp1;
    Output ot;
    ot.show(inp1);
    return 0;
}