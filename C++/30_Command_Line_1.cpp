// 05-05-2023
//WAP in C++ to find sum of n number's using commandLine Argument.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,s=0,c=0;
    if(argc<2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    for(i=1;i<argc;i++)
    {
        c++;
        s+=atoi(argv[i]);
    }
    cout<<"Sum of "<<c<<" numbers are :- "<<s<<endl;
    return 0;
}