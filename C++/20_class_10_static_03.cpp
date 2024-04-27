//WAP in C++ to count number of object.
#include<iostream>
using namespace std;
class Count
{
    private:
        static int count;
    public:
        Count()
        {
            count++;
        }
        void show()
        {
            cout<<"Total Number of Object :-"<<count<<endl;
        }
};
int Count::count;
int main()
{
    Count ct,ct1,ct2,ct3,ct4;
    ct1.show();
    return 0;
}