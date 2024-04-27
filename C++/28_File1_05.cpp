// //WAP in C++
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     // ofstream fout("Bigger.txt");
//     ofstream fout("Bigger.txt",ios::app);
//     int i,n,max;
//     cout<<"Enter Size of Array = ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter Number :- "<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     max=a[0];
//     for(i=0;i<n;i++)
//     {
//         if(max<a[i])
//             max=a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         fout<<a[i]<<"\t";
//     }
//     fout<<max;
//     fout.close();
//     return 0;
// }

//WAP in C++
#include<iostream>
#include<fstream>
#include <cstring>
using namespace std;
int main()
{
    // ofstream fout("Bigger.txt");
    ofstream fout("Bigger.txt",ios::app);
    char *str;
    getline(cin,str);

    fout.close();
    return 0;
}