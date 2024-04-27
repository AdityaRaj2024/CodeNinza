// 5. Write a program to find nCr using function with parameter and return value.
#include<iostream>
using namespace std;
int comb(long unsigned int n,long unsigned int r)
{
    int i,c=1,nf=1,rf=1,a,af=1;
    if(n>r)
    {
        a=n-r;
        for(i=1;i<=n;i++)
            nf=nf*i;
        for(i=1;i<=r;i++)
            rf=rf*i;
        for(i=1;i<=a;i++)
            af=af*i;
        c=nf/(af*rf);
        return(c);
    }
    else
        cout<<"Invalid Entry"<<endl;
}
int main()
{
    long unsigned int n,r;
    cout<<"Enter Number of items in  Set = ";
    cin>>n;
    cout<<"Enter Number of items selected from Set = ";
    cin>>r;
    cout<<"Combination = "<<comb(n,r);
    return 0;
}