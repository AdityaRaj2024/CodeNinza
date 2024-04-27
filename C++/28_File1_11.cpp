#include<iostream>
#include<fstream>
using namespace std;
int main(int argc ,char* argv[])
{
    ifstream fin;
    char ch;
    int ct=1;
    if(argc<2 || argc>2)
    {
        cout<<"Bad Command";
        return 0;
    }
    fin.open(argv[1]);
    if((ch=fin.get())==EOF)
        cout<<"0 Lines";
    else
    {
        while((ch=fin.get())!=EOF)
        {
            if(ch=='\n')
                ct++;
        }
        cout<<"Number of Lines = "<<ct<<endl;
    }
    fin.close();
    return 0;
}