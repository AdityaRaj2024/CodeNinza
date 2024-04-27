#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("File1.txt");
    int roll;
    string name;
    while(!fin.eof())
    {
        fin>>roll>>name;
        cout<<roll<<name<<endl;
    }
    fin.close();
    return 0;
}