//WAP in c++ to find out largest and samllest among 3 numbers using function template.
#include<iostream>
using namespace std;
template <class R>
R gta(R a,R b,R c)
{
    R gt;
    gt=a>b&&a>c?a:b>c?b:c;
    return gt;
}
template <class T>
T sml(T a,T b,T c)
{
    T sm;
    sm=a<b&&a<c?a:b<c?b:c;
    return sm;
}

int main()
{
    int m,n,p;
    float a,b,c;
    cout<<"enter 3 number's = "<<endl;
    cin>>m>>n>>p;
    cout<<"Greatest = "<<gta(m,n,p)<<endl;
    cout<<"Smallest = "<<sml(m,n,p)<<endl;
    cout<<"enter 3 number's = "<<endl;
    cin>>a>>b>>c;
    cout<<"Greatest = "<<gta(a,b,c)<<endl;
    cout<<"Smallest = "<<sml(a,b,c)<<endl;
    return 0;
}