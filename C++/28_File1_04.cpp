//to copy the content of a file into another file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("File1.txt");
    ofstream fout("File2.txt");
    int roll;
    string name;
    while(!fin.eof())
    {
        fin>>roll>>name;
        fout<<roll<<name<<endl;
    }
    fin.close();
    fout.close();
    cout<<"File copied.";
    return 0;
}