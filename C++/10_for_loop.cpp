#include<iostream>
using namespace std;
int main()
{
    /*int i;
    for(i=0;i<=10;i++)
        cout<<"Hello world"<<endl;*/

    //even number from 1 to 50
    /*int i;
    for(i=1;i<=50;i++)
        if(i%2==0)
            cout<<i<<"\n";*/

    //odd number from 1 to 50
    /*int i;
    for(i=1;i<=50;i++)
        if(i%2!=0)
            cout<<i<<"\n";*/
    
    //table of any number
    /*int n,i;
    cout<<"Enter Any Number = ";
    cin>>n;
    for(i=1;i<=10;i++)
        cout<<n<<" X "<<i<<" = " <<n*i<<endl;*/
    
    //factorial 
    /*int i,n,fact=1;
    cout<<"Enter Any Number = ";
    cin>>n;
    for(i=1;i<=n;i++)
        fact=fact*i;
    cout<<"Factorial of "<<n<<" is "<<fact;*/

    //prime number or composite number
    /*int n,i,c=0;
    cout<<"Enter Any Number = ";
    cin>>n;
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            c++;
    if(c==1)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is a composite number";*/

    //factor of a number
    /*int i,n;
    cout<<"Enter Any Number = ";
    cin>>n;
    cout<<"Factors of "<<n<<" are\n";
    for(i=1;i<=n;i++)
        if(n%i==0)
            cout<<i<<"\n";*/

    //perfect number
    /*int i,n,s=0;
    cout<<"Enter Any Number = ";
    cin>>n;
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            s=s+i;
    cout<<"Sum of factor of "<<n<<" is "<<s+n<<endl;
    if(n==s)
        cout<<n<<" is a perfect number.";
    else
        cout<<n<<" is not a perfect number.";*/

    //twin prime numbers
    /*int a,b,i,c1=0,c2=0;
    cout<<"Enter 2 Numbers =\n";
    cin>>a>>b;
    if(a-b==2 || b-a==2)
    {
        for(i=1;i<=a/2;i++)
            if(a%i==0)
                c1++;
        for(i=1;i<=b/2;i++)
            if(b%i==0)
                c2++;
        if(c1==1 && c2==1)
            cout<<a<<" & "<<b<<" are twin prime numbers.";
        else
            cout<<a<<" & "<<b<<" are not twin prime numbers.";
    }
    else
        cout<<a<<" & "<<b<<" are not twin prime numbers.";*/
        
    return 0;
}