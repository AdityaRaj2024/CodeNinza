//25-05-2023
//WAP in C++ to find factorial of any number.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,f,n,j;
    if(argc<2 || argc>2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    for(j=1;j<argc;j++)
    {
        f=1;
        n=atoi(argv[j]);
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<"Factorial of "<<n<<" is :- "<<f;
    }
}