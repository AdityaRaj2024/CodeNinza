 //Single Inheritance program - for finding area and perimeter of a rectangle
 /*#include<iostream>
 using namespace std;
 class L
 {
 	protected :
 		int l;
 		int b;
 };
 class P : public  L
 {
	protected :
		int peri;
		int area;
	public :
		void in();
		void out();

 };
 void P::in()
{
    cout<<"Enter Length and Breadth :- "<<endl;
    cin>>l>>b;
	peri=2*(l+b);
	area=l*b;
}
void P::out()
{
    cout<<"Perimeter of Rectangle = "<<peri<<endl;
    cout<<"Area of Rectangle = "<<area<<endl;
}

 int main()
 {
	P rect ;
	rect.in();
	rect.out();
 	return 0;
 }*/

/*#include<iostream>
using namespace std;
class L
 {
 	protected :
 		int l;
 		int b;
 };
class P : protected L
 {
 	private :
		int peri;
		int area;
	public :
		void rect()
		{
			cout<<"Enter Length and Breadth :- "<<endl;
			cin>>l>>b;
			peri=2*(l+b);
			area=l*b;
			cout<<"Perimeter of Rectangle = "<<peri<<endl;
    		cout<<"Area of Rectangle = "<<area<<endl;
		}
};
int main(int argc, char const *argv[])
{
	P rec;
	rec.rect();
	return 0;
}*/