//WAP in CommandLine Argument to implement FileHandling
#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc<2 || argc>2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    ifstream fin(argv[1]);
    char ch;
    while((ch=fin.get())!=EOF)
    {
        cout<<ch;
    }
    
    return 0;
}