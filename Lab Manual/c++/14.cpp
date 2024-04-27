// 14. Write a program to search an element in the given two-dimensional array using function.
#include<iostream>
using namespace std;
void array()
{
    int r,c;
    cout<<"Enter Size of Array = "<<endl;
    cin>>r>>c;
    int a[r][c],i,j,s,ct=0;
    cout<<"Enter "<<r*c<<" elements in array = "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>a[i][j];
    }
    cout<<"Enter Element to Search = ";
    cin>>s;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            if(s==a[i][j])
                ct++;
    }
    if(ct>=1)
        cout<<s<<" is found "<<ct<<" times."<<endl;
    else
        cout<<s<<" is not found."<<endl;
}
int main()
{
    array();
    return 0;
}