#include<iostream>
using namespace std;
int main()
{
    //fibanocci series
    /*int i,n,a,b,c;
    cout<<"Enter Number of Terms = ";
    cin>>n;
    a=0;
    b=1;
    // c=a+b;
    cout<<a<<endl<<b<<endl;
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }*/

    /*int i,n,a,b,c;
    cout<<"Enter Number of Terms = ";
    cin>>n;
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }*/

    //Amicable Numbers
    /*int a,b,i,s1=0,s2=0;
    cout<<"Enter 2 Numbers = \n";
    cin>>a>>b;
    for(i=1;i<=a/2;i++)
        if(a%i==0)
            s1=s1+i;
    for(i=1;i<=b/2;i++)
        if(b%i==0)
            s2=s2+i;
    if(a==s2 && b==s1)
        cout<<a<<" & "<<b<<" are Amicable Numbers.";
    else
        cout<<a<<" & "<<b<<" are not Amicable Numbers.";*/
    
    //sum of digits
    /*int n,d,i,s=0,c=0;
    cout<<"Enter Any Number = ";
    cin>>d;
    n=d;
    for(;i>0;)
    {
        i=d%10;
        s=s+i;
        d=d/10;
        //c++;
    }
    cout<<"Sum of digit of "<<n<<" is "<<s<<endl;
    //cout<<"count of digit of "<<n<<" is "<<c<<endl;*/

    //count of digits
    /*int n,d,c=0;
    cout<<"Enter Any Number = ";
    cin>>d;
    n=d;
    for(;d>0;)
    {
        d=d/10;
        c++;
    }
    cout<<"count of digit of "<<n<<" is "<<c<<endl;*/

    //sum of numbers between a given range
    /*int num1,num2,s=0,i;
    cout<<"Enter First Term = ";
    cin>>num1;
    cout<<"Enter Last Term = ";
    cin>>num2;
    if(num2>num1)
    {
        for(i=num1;i<=num2;i++)
            s=s+i;
        cout<<"Sum of numbers between "<<num1<<" & "<<num2<<" is "<<s;
    }
    else
        cout<<"Invalid Entry";*/

    //reverse of a number
    /*int num,i,d,rev=0;
    cout<<"Enter Any number = ";
    cin>>num;
    d=num;
    for(;num>0;)
    {
        i=num%10;
        rev=rev*10+i;
        num=num/10;
    }
    cout<<"Reverse of "<<d<<" is "<<rev;*/
    return 0;
}