#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //count of digts, sum of its digit & reverse of digit
    /*int d,i,r,c=0,s=0,rev=0;
    cout<<"Enter Any Number = ";
    cin>>d;
    while(d>0)
    {
        r=d%10;
        s=s+r;
        rev=rev*10+r;
        c++;
        d/=10;
    }
    cout<<"Count of Digits = "<<c<<endl;
    cout<<"sum of Digits = "<<s<<endl;
    cout<<"Reverse of Digits = "<<rev<<endl;*/

    //twin prime numbers
    /*int a,b,i,c1=0,c2=0;
    cout<<"Enter Two Numbers ="<<endl;
    cin>>a>>b;
    if(a-b==2||b-a==2)
    {
        i=1;
        while (a/2>=i)
        {
            if(a%i==0)
                c1++;
            //cout<<c1;
            i++;
        }
        i=1;
        while (b/2>=i)
        {
            if(b%i==0)
                c2++;
            //cout<<c2;
            i++;
        }
        if(c1==1 && c2==1)
            cout<<a<<" & "<<b<<" are twin prime numbers.";
        else
            cout<<a<<" & "<<b<<" are not twin prime numbers.";
    }
    else
            cout<<a<<" & "<<b<<" are not twin prime numbers.";*/


    //twin prime numbers
    /*int a,b,i,c1=0,c2=0;
    cout<<"Enter Two Numbers ="<<endl;
    cin>>a>>b;
    if(a-b==2||a-b==-2)
    {
        i=2;
        while (a/2>=i)
        {
            if(a%i==0)
                c1++;
            i++;
        }
        i=2;
        while (b/2>=i)
        {
            if(b%i==0)
                c2++;
            i++;
        }
        if(c1==0 && c2==0)
            cout<<a<<" & "<<b<<" are twin prime numbers.";
        else
            cout<<a<<" & "<<b<<" are not twin prime numbers.";
    }
    else
            cout<<a<<" & "<<b<<" are not twin prime numbers.";*/

    //hcf
    /*int a,b,c,h;
    cout<<"Enter 3 Numbers =\n";
    cin>>a>>b>>c;
    h=a<b && a<c ? a :b<c?b:c;
    while(a%h!=0 || b%h!=0 || c%h!=0)
        h--;
    cout<<"H.C.F. = "<<h;*/

    //lcm && hcf
    /*int a,b,c,h,l;
    cout<<"Enter 3 Numbers =\n";
    cin>>a>>b>>c;
    h=a<b && a<c ? a :b<c?b:c;
    l=a>b&&a>c?a:b>c?b:c;
    while(a%h!=0 || b%h!=0 || c%h!=0)
        h--;
    while(l%a!=0 || l%b!=0 || l%c!=0)
        l++;
    cout<<"H.C.F. = "<<h<<endl;
    cout<<"L.C.M. = "<<l<<endl;*/

    //reverse of a number
    /*int num,rev=0,r,d;
    cout<<"Enter Any Number=  ";
    cin>>num;
    d=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    cout<<"Reverse of "<<d<<" is "<<rev<<endl;
    if(d==rev)
        cout<<d<<" & "<<rev<<" are palindrome numbers.";
    else
        cout<<d<<" & "<<rev<<" are not palindrome numbers.";*/

    //armstrong numbers
    /*int num,n,r,c=0,s=0;
    cout<<"Enter Any Number = ";
    cin>>n;
    num=n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    n=num;
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,c);
        n/=10;
        cout<<s<<endl;
    }
    cout<<"Count of digits of "<<num<<" is "<<c<<endl;
    if(s==num)
        cout<<num<<" is an armstrong number.";
    else
        cout<<num<<" is not an armstrong number.";*/

    //strong number
    /*int n,num,r,f,s=0;
    cout<<"Enter Any Number = ";
    cin>>n;
    num=n;
    while(n>0)
    {
        f=1;
        r=n%10;
        while(r>0)
        {
            f=f*r;
            r--;
        }
        s=s+f;
        n/=10;
    }
    if(s==num)
        cout<<num<<" is a strong number.";
    else
        cout<<num<<" is not a strong number.";*/

    //convert deceimal into binary
    /*int dec,bin=0,r,n,i=1;
    cout<<"Enter Any Decimal Number = ";
    cin>>dec;
    n=dec;
    while(dec>0)
    {
        r=dec%2;
        bin=bin+r*i;
        dec=dec/2;
        i*=10;
    }
    cout<<"Binary Digit of "<<n<<" is "<<bin;*/

    //convert deceimal into octal
    /*int dec,oct=0,r,n,i=1;
    cout<<"Enter Any Decimal Number = ";
    cin>>dec;
    n=dec;
    while(dec>0)
    {
        r=dec%8;
        oct=oct+r*i;
        dec=dec/8;
        i*=10;
    }
    cout<<"Binary Digit of "<<n<<" is "<<oct;*/

    //convert binary to decimal
    /*int bin,dec=0,n,r,i=1;
    cout<<"Enter any Binary Digit = ";
    cin>>bin;
    n=bin;
    while(bin>0)
    {
        r=bin%10;
        dec=dec+r*i;
        i=i*2;
        bin/=10;
    }
    cout<<"Decimal Digit of "<<n<<" is "<<dec;*/

    //convert octal to decimal
    /*int oct,dec=0,n,r,i=1;
    cout<<"Enter any octal Digit = ";
    cin>>oct;
    n=oct;
    while(oct>0)
    {
        r=oct%10;
        dec=dec+r*i;
        i=i*8;
        oct/=10;
    }
    cout<<"Decimal Digit of "<<n<<" is "<<dec;*/
    return 0;
}