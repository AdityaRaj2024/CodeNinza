#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream obj("File2.txt");
    obj<<"5/tSuraj ";
    obj.close();
    return 0;
}