#include<iostream>
using namespace std;
int main()
{
    //greatest number and smallest number
    /*int s;
    cout<<"Enter size of array = ";
    cin>>s;
    int a[s],i,gt,sm;
    cout<<"Enter "<<s<<" values of array ="<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    gt=sm=a[0];
    for(i=0;i<s;i++)
    {
        if(a[i]>gt)
            gt=a[i];
        if(a[i]<sm)
            sm=a[i];
    }
    // sm=a[0];
    // for(i=0;i<s;i++)
    // {
    //     if(a[i]<sm)
    //         sm=a[i];
    // }
    cout<<"Greatest Number = "<<gt<<endl;
    cout<<"Smallest Number = "<<sm<<endl;*/

    //sorting of array
    /*int s;
    cout<<"Enter size of array = ";
    cin>>s;
    int a[s],i,j,t;
    cout<<"Enter values of array ="<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    for(i=0;i<s;i++)
    {
        for(j=i;j<s;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"In Ascending order = "<<endl;
    for(i=0;i<s;i++)
        cout<<a[i]<<"\t";

    cout<<"\nIn Desscending order = "<<endl;
    for(i=s-1;i>=0;i--)
        cout<<a[i]<<"\t";*/

    //searching-linear or sequential
    /*int s;
    cout<<"Enter Size of array = ";
    cin>>s;
    int a[s],i,se,c=0;
    cout<<"Enter Values of array = ";
    for(i=0;i<s;i++)
        cin>>a[i];
    cout<<"Enter Search Values = ";
    cin>>se;
    for(i=0;i<s;i++)
    {
        if(se==a[i])
            c++;
    }
    cout<<se<<" is found "<<c<<" times.";*/

    //Binary Searching
    /*int s;
    cout<<"Enter Size of Array = ";
    cin>>s;
    int a[s],i,j,t,se,mid,min,max,c=0;
    cout<<"Enter values of array ="<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    for(i=0;i<s;i++)
    {
        for(j=i;j<s;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"In Ascending order = "<<endl;
    for(i=0;i<s;i++)
        cout<<a[i]<<"\t";
    cout<<"\nEnter Search Values = ";
    cin>>se;  
    min=0;
    max=s-1;
    while (min<max)
	{
        mid=(min+max)/2;
        if(se==a[mid])
        {
            for(i=0;i<s;i++)
            {
                if(a[i]==se)
                    c++;
            }
            cout<<se<<" is found "<<c<<" times";
            // printf("%d Is Found = %d times.",se,c);
            break;
        }
        if(se<a[mid])
            max=mid-1;
        if(se>a[mid])
            min=mid+1;
        
        if(min>=max)
            cout<<se<<" is not found.";
	}*/

    //remove duplicate element
    // int s;
    // cout<<"Enter Size of array = ";
    // cin>>s;
    // int a[s],i,j;
    // cout<<"Enter Values of array = ";
    // for(i=0;i<s;i++)
    //     cin>>a[i];
    // for(i=0;i<s;i++)
    // {
    //     for(j=i;j<s;j++)
    // }  
    return 0;
}
