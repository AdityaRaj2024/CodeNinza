//24-05-2023
//WAP in C++ to input natural number from 1 to 100 in a file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream fout("A.txt",ios::app);
    ofstream fout("A.txt");
    int i=1;
    while(i<=100)
    {
        cout<<i<<endl;
        fout<<i<<endl;
        i++;
    }
    return 0;
}