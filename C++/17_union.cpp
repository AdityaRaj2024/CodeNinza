#include<iostream>
using namespace std;
union exchange
{
    float rupee;
    char ch;
    // string cy;
};
int main()
{
    union exchange e;
    e.rupee=41.4;
    e.ch='4';
    cout<<"Rupee = "<<e.rupee<<endl;
    return 0;
}
