#include<iostream>
#define size 5 
using namespace std;
int main()
{
    //input 5 numbers from array
    //1st method - defining size of array in advance
    /*int a[5],i;
    cout<<"Enter 5 Values of array = "<<endl;
    for(i=0;i<5;i++)
        cin>>a[i];
    cout<<"Array is = \n";
    for(i=0;i<5;i++)
        cout<<a[i]<<"\t";
    cout<<"\n"<<a<<endl;*/


    //2nd method - define size of array using macro;
    /*int a[size],i;
    cout<<"Enter "<<size<<" Values of array = "<<endl;
    for(i=0;i<size;i++)
        cin>>a[i];
    cout<<"Array is = \n";
    for(i=0;i<size;i++)
        cout<<a[i]<<"\t";
    cout<<"\n"<<a<<endl;*/

    //3rd method - taking size of array during run time input
    /*int s;
    cout<<"Enter size of array = ";
    cin>>s;
    int a[s],i;
    cout<<"Enter "<<s<<" Values of array = "<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    cout<<"Array is = \n";
    for(i=0;i<s;i++)
        cout<<a[i]<<"\t";
    cout<<"\n"<<a<<endl;*/

    //array as a pointer
    /*int s;
    cout<<"Enter Size = ";
    cin>>s;
    int n[s],i;
    cout<<"Enter "<<s<<" values:-"<<endl;
    for(i=0;i<s;i++)
    {
        cin>>*(n+i);
    }
    cout<<"Array are ="<<endl;
    for(i=0;i<s;i++)
        cout<<*(n+i)<<"\t";*/

    /*int s;
    printf("Enter Size = ");
    scanf("%d",&s);
    int n[s],i;
    printf("Enter %d values\n",s);
    for(i=0;i<s;i++)
    {
        scanf("%d",(n+i));
    }
    printf("Array is\n");
    for(i=0;i<s;i++)
        printf("%d\t",*(n+i));*/

    //print array in reverse order
    /*int s;
    cout<<"Enter size of array = ";
    cin>>s;
    int a[s],i;
    cout<<"Enter "<<s<<" Values of array = "<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    cout<<"Reverse Array is = \n";
    for(i=s-1;i>=0;i--)
        cout<<a[i]<<"\t";*/

    //print array at only even index position
    /*int s;
    cout<<"Enter size of array = ";
    cin>>s;
    int a[s],i;
    cout<<"Enter "<<s<<" Values of array = "<<endl;
    for(i=0;i<s;i++)
        cin>>a[i];
    cout<<"Array value at even index position = \n";
    for(i=0;i<s;i++)
    {
        if(i%2==0)
            cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Array value at odd index position = \n";
    for(i=0;i<s;i++)
    {
        if(i%2!=0)
            cout<<a[i]<<"\t";
    }*/
    
    // int *p;
    // cout<<(sizeof(p));
    return 0;
}