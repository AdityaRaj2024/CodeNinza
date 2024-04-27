//25-05-2023
//WAP in C++ to find factorial of any number.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,f=1,n;
    if(argc<2 || argc>2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    n=atoi(argv[1]);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial of "<<n<<" is :- "<<f;
    return 0;
}
