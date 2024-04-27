// 50. Write a program to read and write students information into the file using the data members in a private access mode.
#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    public:
        // ofstream fout("FileStd.txt");
        int id;
        char name[15];
        void in()
        {
            cout<<"Enter ID and Name :- "<<endl;
            cin>>id>>name;
        }
        void show()
        {
            cout<<"Name :- "<<name<<endl<<"ID :- "<<id<<endl;
        }
};

int main()
{
    // ofstream fout("FileStd.txt");
    fstream fout("FileStd.txt",ios::in | ios::out);
    int n,i;
    cout<<"Enter Number of Students :- ";
    cin>>n;
    Student std[n];
     for(i=0;i<n;i++)
    {
        cout<<"Enter Records of Student "<<i+1<<endl;
        std[i].in();
        fout.write((char *) & std[i], sizeof(std[i]));
    }
    fout.seekg(0);
    cout<<"Record of All Student :- "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Record os Student "<<i+1<<endl;
        fout.read((char *) & std[i], sizeof(std[i]));
        std[i].show();
    }
    fout.close();
    return 0;
}