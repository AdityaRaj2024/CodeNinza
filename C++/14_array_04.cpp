/*//Sorting of Array:- Selection Sort
#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter Size of Array :- ";
    cin>>s;
    int a[s],i,j,t;
    cout<<"Enter "<<s<<" Elements Of Array = "<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered Array :-  "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<"  ";
    }
    for(i=0;i<s;i++)
    {
        for(j=i;j<s;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"\nSorted Array\nIn Ascending Order:- "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nIn Descending Order :- "<<endl;
    for(i=s-1;i>=0;i--)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}*/

//Sorting of Array:- Bubble Sort
#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter Size of Array :- ";
    cin>>s;
    int a[s],i,j,t;
    cout<<"Enter "<<s<<" Elements Of Array = "<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered Array :-  "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<"  ";
    }
    for(i=1;i<s-1;i++)
    {
        for(j=0;j<s-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"\nSorted Array\nIn Ascending Order:- "<<endl;
    for(i=0;i<s;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nIn Descending Order :- "<<endl;
    for(i=s-1;i>=0;i--)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}