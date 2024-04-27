//WAP in C++ to create a class Shape and find area and perimeter of differnt shapes using method overloading.
#include<iostream>
using namespace std;
class Shape
{
    public:
        void area(int l,int b)
        {
            cout<<"Area of Rectangle :- "<<(l*b)<<endl;
        }
        void area(int s)
        {
            cout<<"Area of Square :- "<<(s*s)<<endl;
        }
        void area(float r)
        {
            cout<<"Area of Circle :- "<<(3.14*r*r)<<endl;
        }
        void area()
        {
            int b,h;
            cout<<"Enter Base and Height of Triangle :- "<<endl;
            cin>>b>>h;
            cout<<"Area of Triangle :- "<<(b*h)/2<<endl;
        }
};
int main()
{
    Shape sp;
    sp.area();
    sp.area(6);
    sp.area(7,9);
    sp.area(10.5f);
    return 0;
}