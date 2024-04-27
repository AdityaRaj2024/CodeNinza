//26-05-2023
//WAP in C++ to access private data of the class by a function for finding factorial of a number.
//using friend function
/*#include<iostream>
using namespace std;
class Fact
{
    private:
        int x;
        void in()
        {
            cout<<"Enter Any Number :- ";
            cin>>x;
        }
    public:
        friend void findFact(Fact f);
};
void findFact(Fact f)
{
    f.in();
    // int fct=1;
    double fct=1;
    int i;
    for(i=1;i<=f.x;i++)
    {
        fct=fct*i;
    }
    cout<<"Factorial of "<<f.x<<" is :- "<<fct;
}
int main()
{
    Fact ft;
    findFact(ft);
    return 0;
}*/


/*#include<iostream>
using namespace std;
class Fact
{
    private:
        int x;
        void in()
        {
            cout<<"Enter Any Number :- ";
            cin>>x;
        }
    public:
        void findFact()
        {
            in();
            double fct=1;
            int i;
            for(i=1;i<=x;i++)
            {
                fct=fct*i;
            }
            cout<<"Factorial of "<<x<<" is :- "<<fct;
        }
};
int main()
{
    Fact ft;
    ft.findFact();
    return 0;
}*/