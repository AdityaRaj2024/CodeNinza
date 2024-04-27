//WAP in C++ to find area and perimeter of rectangle using multilevel inheritance.
#include<iostream>
using namespace std;
class L
{
    protected:
        int l;
};
class B : protected L
{
    protected:
        int b;
};
class P : protected B
{
    // private:
        int peri;
		int area;
    public:
    void rect()
    {
        cout<<"Enter Length And Breadth ="<<endl;
        cin>>l>>b;
        peri=2*(l+b);
	    area=l*b;
        cout<<"Perimeter of Rectangle = "<<peri<<endl;
        cout<<"Area of Rectangle = "<<area<<endl;
    }
};
int main()
{
    P r;
    r.rect();
    return 0;
}