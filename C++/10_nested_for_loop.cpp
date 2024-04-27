#include<iostream>
using namespace std;
int main()
{
    //table between a given range
    /*int n,m,i,t;
    cout<<"Enter First Term = ";
    cin>>m;
    cout<<"Enter Last Term = ";
    cin>>n;
    if(m<n)
    {
        cout<<"Table Between "<<m<<" And "<<n<<" Are As Follows =\n";
        for(i=m;i<=n;i++)
        {
            for(t=1;t<=10;t++)
            {
                cout<<i<<" X "<<t<<" = "<<i*t<<"\t";
            }
            cout<<"\n";
        }
    }
    else
        cout<<"Invalid Entry";*/

    /*int n,m,i,t;
    cout<<"Enter First Term = ";
    cin>>m;
    cout<<"Enter Last Term = ";
    cin>>n;
    if(m<n)
    {
        cout<<"Table Between "<<m<<" And "<<n<<" Are As Follows =\n";
        for(t=1;t<=10;t++)
        {
            for(i=m;i<=n;i++)
            {
                cout<<i<<" X "<<t<<" = "<<i*t<<"\t";
            }
            cout<<"\n";
        }
    }
    else
        cout<<"Invalid Entry";*/

    //prime number between a given range
    /*int i,a,b,j,c;
    cout<<"Enter First Term = ";
    cin>>a;
    cout<<"Enter Last Term = ";
    cin>>b;
    cout<<"Prime Number's Between "<<a<<" & "<<b<<" are :-"<<endl;
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            c=0;
            for(j=1;j<=i/2;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==1)
                cout<<i<<endl;
        }
    }
    else
        cout<<"Invalid Entry";*/

    //perfect number between a given range
    /*int i,a,b,j,s;
    cout<<"Enter First Term = ";
    cin>>a;
    cout<<"Enter Last Term = ";
    cin>>b;
    cout<<"Perfect Number's Between "<<a<<" & "<<b<<" are :-"<<endl;
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            s=0;
            for(j=1;j<=i/2;j++)
            {
                if(i%j==0)
                    s=s+j;
            }
            if(i==s)
                cout<<i<<endl;
        }
    }
    else
        cout<<"Invalid Entry";*/
    return 0;
}