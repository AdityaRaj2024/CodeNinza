//11-05-2023
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//width and setw()
	cout<<"Width and setw"<<endl;
	int c=12;
	cout.width(5);
	cout<<c<<endl;;
	cout<<setw(5)<<c<<endl;
    
    //precision
	cout<<"\nPrecision and setprecision"<<endl;
   float f=12.8765f;
   cout.precision(2);
   cout<<f<<endl;
   cout<<setprecision(4)<<f<<endl;

	//fill() or setfill()
	cout<<"\nFill and setfill()"<<endl;
	int x=12;
	cout.width(6);
	cout.fill(' ');
	cout<<x<<endl;
	cout<<setw(8)<<setfill(' ')<<x<<endl;

	//setf() and setiosflags()
	cout<<"\nsetf and setiosfalgs()"<<endl;
	int s = 12;
	int a = 18;
	int b = 52;
	int d = 152;
	float g = 152.2345;
	cout.width(5);
	cout<<s<<endl;
	cout.setf(ios::left);
	cout<<s<<endl;
	cout<<setw(8)<<s<<endl<<setiosflags(ios::left)<<s<<endl;
	cout<<setw(5)<<a<<endl<<"Scientific Notation = "<<setiosflags(ios::scientific)<<a<<endl;
	cout<<setw(5)<<b<<endl<<"Octal = "<<setiosflags(ios::oct)<<b<<endl;
	cout<<setw(5)<<d<<endl<<"Hexadecimal = "<<setiosflags(ios::hex)<<d<<endl;
	cout.precision(3)<<cout<<"Decimal Precision = "<<cout.setf(ios::showpoint)<<cout<<g<<endl;
    return 0;
}
