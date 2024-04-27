// 05-05-2023
//WAP in C++ to find sum of 2 number's using commandLine Argument.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y;
    if(argc<3 || argc>3)
    {
        cout<<"Invalid Command.";
        return 0;
    }

    x=atoi(argv[1]);
    y=atoi(argv[2]);
    cout<<"Sum :- "<<x+y<<endl;
    return 0;
}