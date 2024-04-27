#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int i,j;
    cout<<"Enter Size of Row & Column :- ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Array is :- "<<endl;
    for(i=0;i>r;i++)
    {
        for(j=0;j>c;j++)
            cout<<a[i][j];
    }
    return 0;
}