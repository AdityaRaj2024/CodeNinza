#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("A.txt");
    ofstream fout("B.txt");
    int n;
    while(fin.eof()<1)
    {
        fin>>n;
        if(n>85)
        {
            cout<<n<<"\t";
            fout<<n<<endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}