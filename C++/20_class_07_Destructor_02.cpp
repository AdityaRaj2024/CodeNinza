#include<iostream>
using namespace std;
class Destruct
{
    public:
        Destruct()      //constructor
        {
            cout << "Inside Constructor"<<endl;
            cout << "C++ Object created"<<endl;
        }
        ~Destruct()    //Destructor
        {
            cout << "Inside Destructor"<<endl;
            cout << "C++ Object destructed"<<endl;
        }
};
int main()
{
    Destruct des;
    // Marks m2;
    return 0;
}