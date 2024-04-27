// 25-05-2023
#include<iostream>
#include<string.h>
#include<stdlib.h>
// #include<string>
// #include<string.h>
#include<cctype>
using namespace std;
int main(int argc, char *argv[])
{
    if(argc<2 || argc>2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    cout<<strupr(argv[1]);s
    // cout<<toupper(argv[1]);
    return 0;
}