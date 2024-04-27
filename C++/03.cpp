//3. Write a program to input any number after that find factorial number.
#include<iostream>
using namespace std;
class Fact
{
    private:
        long unsigned int a,fact;
        int i;
        void in()
        {
            cout<<"Enter a Number = ";
            cin>>a;
        }
    public:
        Fact()
        {
            in();
            fact=1;
            for(i=1;i<=a;i++)
                fact=fact*i;
            cout<<"Factorial of "<<a<<" is "<<fact;
        }
};
int main()
{
    Fact f;
    return 0;
}