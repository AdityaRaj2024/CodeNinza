/**
 * WAP in C++ to input a string and then convert it into upper case and lower case,
*/
#include<iostream>
// #include<string>
// #include<cstring>
// #include<string.h>
#include<cctype>
using namespace std;
int main()
{
    string s;
    int i;
    cout<<"Enter Any String :- "<<endl;
    getline(cin,s);
    cout<<"String in Upper Case :- "<<endl;
    for(i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
    cout<<s<<endl;
    cout<<"String in Lower Case :- "<<endl;
    for(i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}