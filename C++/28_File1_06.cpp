//24-05-2023
//WAP in C++ that print itself.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("28_File1_6.cpp");
    char ch;
    while((ch=fin.get())!=EOF)
    {
        cout<<ch;
    }
    fin.close();
    return 0;
}