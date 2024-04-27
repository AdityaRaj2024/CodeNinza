// 15. Write a program to search and display the position of an element in a single-dimensional array using function.
#include<iostream>
using namespace std;
void position()
{
    int s;
    cout<<"Enter Size of Array = ";
    cin>>s;
    int a[s],i,e;
    cout<<"Enter "<<s<<" elements in array = "<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Elements to Search = ";
    cin>>e;
    for(i=0;i<s;i++)
    {
        if(e==a[i])
        {   
            break;
        }
    }
    cout<<"Position of "<<e<<" is "<<i+1;
}
int main()
{
    position();
    return 0;
}