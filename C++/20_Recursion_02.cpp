#include<iostream>
using namespace std;
int fib(int t)
{
    if(t==0)
        return 0;
    else if(t==1)
        return 1;
    else
        return fib(t-1)+fib(t-2);
}
int main()
{
    int n;
    cout<<"Enter Number of terms = ";
    cin>>n;
    cout<<"Fibanocci Series up to "<<n<<" terms is :- "<<endl;
    int i;
    for(i=0;i<n;i++)
    {
        cout<<fib(i)<<"\t";
    }
    return 0;
}