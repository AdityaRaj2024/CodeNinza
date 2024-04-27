// 25-05-2023
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
    int i;
    if(argc<2 || argc>2)
    {
        cout<<"Invalid Command.";
        return 0;
    }
    for(i=0;*(argv[1]+i)!='\0';i++)
    {
        if(*(argv[1]+i)>=97 && *(argv[1]+i)<=122)
        {
            *(argv[1]+i)=*(argv[1]+i)-32;
        }
    }
    cout<<argv[1];
    return 0;
}