// 05-06-2023
#include<iostream>
#include<cstring>
using namespace std;
int main(int argc ,char* argv[])
{
    if(argc<2)
    {
        cout<<"Bad Command";
        return 0;
    }
    for(int i=1;i<argc;i++)
    {
        strupr(argv[i]);
        cout<<argv[i]<<" ";
    }
}
