/*
13-05-2023
    1) WAP in C++ to find out the largest and smallest among 3 numbers using reference variable.
    2)WAP in C++ to find out the largest and smallest among n numbers using reference variable.
    2)WAP in C++ to find out sum of 2 number using class templete.
    2)WAP in C++ to overload function templete.
*/
// #include<iostream>
// using namespace std;
// void num(int a,int b,int c ,int &gt,int &sm)
// {
//     gt=sm=a;
//     gt = a>b&&a>c?a:b>c?b:c;
//     sm = a<b&&a<c?a:b<c?b:c;
// }
// int main()
// {
//     int p,q,r,l,s;
//     num(p,q,r,l,s);
//     cout<<"Enter 3 Number's = "<<endl;
//     cin>>p>>q>>r;
//     cout<<"Largest Number = "<<l<<endl;
//     cout<<"Smallest Number = "<<s<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
void num(int a[],int s ,int &gt,int &sm)
{
    int i;
    gt=sm=a[0];
    for(i=1;i<s;i++)
    {
        if(a[i]>gt)
            gt=a[i];
        if(a[i]<sm)
            sm=a[i];
    }
}
int main()
{
    int s;
    cout<<"Enter Size of Array = ";
    cin>>s;
    int a[s],min,max;
    cout<<"Enter Elements of Array = "<<endl;
    for(int i=0;i<s;i++)
        cin>>a[i];
    num(a,s,min,max);
    // int min,max;
    // int a[]={1,2,4,7,45,54,41,0};
    // num(a,8,min,max);
    cout<<"Largest Number = "<<min<<endl;
    cout<<"Smallest Number = "<<max<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
template <class T>
void num(T a[],int s ,T &gt,T &sm)
{
    int i;
    gt=sm=a[0];
    for(i=1;i<s;i++)
    {
        if(a[i]>gt)
            gt=a[i];
        if(a[i]<sm)
            sm=a[i];
    }
}
int main()
{
    int s;
    cout<<"Enter Size of Array = ";
    cin>>s;
    int a[s],min,max;
    //float a[s],min,max;
    cout<<"Enter Elements of Array = "<<endl;
    for(int i=0;i<s;i++)
        cin>>a[i];
    num(a,s,min,max);
    // int min,max;
    // int a[]={1,2,4,7,45,54,41,0};
    // num(a,8,min,max);
    cout<<"Largest Number = "<<min<<endl;
    cout<<"Smallest Number = "<<max<<endl;
    return 0;
}*/