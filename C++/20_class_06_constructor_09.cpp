//WAP in C++ to create a class named circle to input radus using Default and parameterized constructor. After that find Area and Perimeter of that circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
        float r;
    public:
        Circle();
        Circle(int r);
        // {
        //     this->r=r;
        // }
        ~Circle();
        // {
        //     cout<<"Area :- "<<3.14*r*r<<endl;
        //     cout<<"Perimeter :- "<<2*3.14*r<<endl;
        // }
};
Circle::Circle()
{
    cout<<"Enter Radius = ";
    cin>>r;
}
Circle::Circle(int r)
{
    this->r=r;
}
Circle::~Circle()
{
    cout<<"Area :- "<<3.142*r*r<<endl;
    cout<<"Perimeter :- "<<2*3.142*r<<endl;
}
int main()
{
    Circle c1;
    Circle c2(7);
    return 0;
}