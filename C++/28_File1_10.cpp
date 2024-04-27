/*
    01-06-2023
    WAP in C++ that counts total number of lines in a given file.
*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("28_File1_10.cpp");
    char ch;
    int ct=0,c=0;
    while((ch=fin.get())!=EOF)
    {
        // cout<<ch<<endl;
        if(ch=='\n')
            ct++;

        c++;
    }
    cout<<"Number of Lines = "<<ct<<endl;
    cout<<"Number of Characters = "<<c+ct;
    return 0;
}*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    string str;
    char ch;
    int ct=1,c=0;
    cout<<"Enter File Name = ";
    cin>>str;
    fin.open(str);
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