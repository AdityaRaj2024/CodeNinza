#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //greatest among 5 numbers
    /*int a,b,c,d,e,gt;
    cout<<"Enter 5 Numbers :-\n";
    cin>>a>>b>>c>>d>>e;
    if(a>b && a>c && a>d && a>e)
        gt=a;
    else if(b>c && b>d && b>e)
        gt=b;
    else if(c>d && c>e)
        gt=c; 
    else if(d>e)
        gt=d;
    else 
        gt=e;
    cout<<"Greatest Number = "<<gt;*/

    /*char c;
    cout<<"Enter Any Character = ";
    cin>>c;
    if(c>='A' && c<='Z')
        cout<<"Upper Case";
    else if(c>='a' && c<='z')
        cout<<"Lower Case";
    else if(c>='0' && c<='9')
        cout<<"Digits";
    else
        cout<<"Special Characters";

    /*int m1,m2,m3;
    float tm,pr;
    cout<<"Enter Marks of 3 Subjects :-\n";
    cin>>m1>>m2>>m3;
    tm=m1+m2+m3;
    pr=tm/3;
    cout<<"Total Marks = "<<tm;
    cout<<"\nPercentage = "<<pr<<" %";
    if(tm<300 && tm>0)
    {
        if(pr>=90)
            cout<<"\nA+";
        else if(pr>=80 && pr<90)
            cout<<"\nA";
        else if(pr>=70 && pr<80)
            cout<<"\nB";
        else if(pr>=60 && pr<70)
            cout<<"\nC";
        else if(pr>=45 && pr<60)
            cout<<"\nD";
        else
            cout<<"\nF";
    }
    else
        cout<<"\nInvalid Entry";*/

    int i=1;
    while(i>0)
    {
        if((i%15==0 && i%25==0 && i%2==1))
        {
            cout<<i;
            break; 
        }
        i++;
    }
    return 0;
}