//WAP in C++ to find area and perimeter of rectangle using hierarchial inheritance.
/*#include<iostream>
using namespace std;
class  A
{
    protected:
        int l,b;
    public:
        A()
        {
            cout<<"Enter length & breadth :-"<<endl;
            cin>>l>>b;
        }
};
class B : public A
{
    int area;
    public:
        B()
        {
            cout<<l<<endl<<b<<endl;
            area=l*b;
        }
        ~B()
        {
            cout<<"Area = "<<area<<endl;
        }
};
class C : public A
{
    int peri;
    public:
        C()
        {
            cout<<l<<endl<<b<<endl;
            peri=2*(l+b);
        }
        ~C()
        {
            cout<<"perimeter = "<<peri<<endl;
        }
};
int main()
{
    //A ob1;
    //ob1.in();
    B ob2=B();
    C ob3;
    return 0;
}*/

#include<iostream>
using namespace std;
class  A
{
    protected:
        int l,b;
    public:
        //int l,b;
        void in()
        {
            cout<<"Enter length & breadth :-"<<endl;
            cin>>l>>b;
        }
};
class B : public A
{
    int ar;
    public:
        //  void in()
        // {
        //     cout<<"Enter length & breadth :-"<<endl;
        //     cin>>l>>b;
        // }
    	//int area;
        void area()
        {
            in();
            //cout<<l<<endl<<b<<endl;
            ar=l*b;
            cout<<"Area = "<<ar<<endl;
        }
};
class C : public A
{
    int pri;
    public:
        //  void in()
        // {
        //     cout<<"Enter length & breadth :-"<<endl;
        //     cin>>l>>b;
        // }
        void peri()
        {
            in();
            //cout<<l<<endl<<b<<endl;
            pri=2*(l+b);
            cout<<"Perimeter = "<<pri<<endl;
    	}
};
int main()
{
    B are;
    C pe;
    //are.in();
    are.area();
    pe.peri();
    //pe.in();
    

}