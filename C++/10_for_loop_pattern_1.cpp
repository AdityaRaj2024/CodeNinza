#include<iostream>
using namespace std;
int main()
{
    //pyramid 
    /*int n,i,j,k;
    cout<<"Enter Number of Terms = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            cout<<"   ";
        for(j=1;j<2*i;j++)
            cout<<" * ";
        cout<<endl;
    }*/

    //inverted pyramid
    /*int n,i,j,k;
    cout<<"Enter Number of Terms = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
            cout<<"   ";
        for(j=2*n;j>=2*i;j--)
            cout<<" * ";
        cout<<endl;
    }*/

    //diamond shape
    /*int n,i,j,k;
    cout<<"Enter Number of Lines = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            cout<<"   ";
        for(j=1;j<2*i;j++)
            cout<<" * ";
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(k=1;k<i;k++)
            cout<<"   ";
        for(j=2*n;j>=2*i;j--)
            cout<<" * ";
        cout<<endl;
    }*/

    //square shape
    /*int n,i,j,k;
    cout<<"Enter Number of Lines = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }*/

    
    return 0;
}