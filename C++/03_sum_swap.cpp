#include<iostream>
// using std::cout;
// using std::cin;
// using std::endl;
using namespace std;
int main(int argc, char const *argv[])
{
    /*int n1,n2;
    cout<<"Enter Value of 1st Number : "; // "<<" is called Insertion operator.
    cin>>n1; //">>" is called Extraction operator.
    
    cout<<"Enter Value of 2nd Number : "; 
    cin>>n2; 
    cout<<"Sum of Both Number's = "<<n1+n2;*/

    //swap 2 numbers - using 3rd variable
    /*int x=12,y=15,t;
    t=x;
    x=y;
    y=t;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"t="<<t<<endl;*/
    
    //swap 2 numbers - without using 3rd variable
    /*int a,b;
    cout<<"\n\nEnter 2 Numbers :-\n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"First Number = "<<a;
    cout<<"\nSecond Number = "<<b;*/

    //swap 3 numbers
    /*int l,m,n,gt;
    cout<<"\n\nEnter 3 Numbers :-\n";
    cin>>l>>m>>n;
    l=l+m+n;
    m=l-(m+n);
    n=l-(m+n);
    l=l-(m+n);
    cout<<"First Number = "<<l<<"\nSecond Number = "<<m<<"\nThird Number = "<<n;
    gt=l>m && l>n ?l : m>n ? m:n;
    cout<<"\nGreatest Number = "<<gt;*/

    //greatest among 4 numbers
    /*int a,b,c,d,gt;
    cout<<"Enter 4 number = "<<endl;
    cin>>a>>b>>c>>d;
    gt=a;
    if(gt<b)
        gt=b;
    if(gt<c)
        gt=c;
    if(gt<d)
        gt=d;
    cout<<"Greatest Number = "<<gt;*/

    //smallest among 4 numbers
    /*int a,b,c,d,sm;
    cout<<"Enter 4 number ="<<endl;
    cin>>a>>b>>c>>d;
    sm=a;
    if(sm>b)
        sm=b;
    if(sm>c)
        sm=c;
    if(sm>d)
        sm=d;
    cout<<"Smallest Number = "<<sm;*/

    //pass or fail - ternary
    // int m;
    //grading
    /*int m;
    cout<<"Enter Total Marks = ";
    cin>>m;
    if(m<0 || m>500)
        cout<<"Invalid Entry.";
    else if(m>=300)
        cout<<"1st Division";
    else if(m>=225)
        cout<<"2nd Division";
    else if(m>=150)
        cout<<"3rd Division";
    else
        cout<<"Fail";*/

    /*int num1,num2,i,j;
    cout<<"Enter Range ="<<endl;
    cin>>num1>>num2;
    if(num1>num2)
    {
        num1=num1-num2;
        num2=num1+num2;
        num1=num2-num1;
    }
    cout<<"Prime number between "<<num1<<" and "<<num2<<":"<<endl;
    for(i=num1;i<num2;i++)
    {   int count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==0 && i!=0 && i!=0)
            cout<<i<<"\t";
    }*/
    
   return 0;

}
