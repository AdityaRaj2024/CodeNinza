// 16.Write a program to find the sum of diagonal elements, upper triangular elements and the lower triangular elements
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int r,c;
        void in();
    public:
        void get();
};
void Matrix :: in()
{
    cout<<"Enter Size Of Matrix = "<<endl;
    cin>>r>>c;
}
void Matrix::get()
{
    in();
    int a[r][c],i,j,s;
    cout<<"Enter Elements in "<<r<<" X "<<c<<" Array "<<endl;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
    cout<<"*******Matrix*********"<<endl;
    s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of All elements of Matrix = "<<s<<endl;
    s=0;
    cout<<"******Diagonal Matrix*********"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
                cout<<a[i][j ]<<"\t";
            }
            else
                cout<<0<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of All Diagonal elements of Matrix = "<<s<<endl;
    s=0;
    cout<<"******Upper Triangular Matrix*********"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<=j)
            {
                cout<<a[i][j ]<<"\t";
                s=s+a[i][j];
            }
            else
                cout<<0<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of All Upper triangular elements of Matrix = "<<s<<endl;
    s=0;
    cout<<"******Lower Triangular Matrix*********"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>=j)
            {
                cout<<a[i][j ]<<"\t";
                s=s+a[i][j];
            }
            else
                cout<<0<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of All Lower triangular elements of Matrix = "<<s<<endl;
    s=0;
    cout<<"Transpose Matrix ="<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+a[j][i];
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Sum of All elements of Transpose Matrix = "<<s<<endl;
}
int main()
{
    Matrix mat;
    mat.get();
    return 0;
}