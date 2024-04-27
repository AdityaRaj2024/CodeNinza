//WAP in c++ to find out largest and samllest among n numbers using function template.
#include<iostream>
using namespace std;
template<class T>
T gt(T a[],T n)
{
    T g=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>g)
            g=a[i];
    }
    return g;
}
template<class T>
T sml(T a[],T n)
{
    T sm=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<sm)
            sm=a[i];
    }
    return sm;
}
// template<class T>
// void input()
// {
    
// }
int main()
{
    int k;
    cout<<"Enter size of Array = ";
    cin>>k;
    int a[k],i;
    cout<<"Enter Elements in Array ="<<endl;
    for(i=0;i<k;i++)
        cin>>a[i];
    cout<<"\nLargest Value = "<<gt(a,k);
    cout<<"\nLargest Value = "<<sml(a,k);
    return 0;
}