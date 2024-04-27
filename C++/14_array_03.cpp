#include<iostream>
using namespace std;
int main()
{
    //print a matrix
    /*int m,n;
    cout<<"Enter Size of Matirx = \n";
    cin>>m>>n;
    int a[m][n],i,j;
    cout<<"Enter "<<m*n<<" elements =\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"Matrix is :-"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<"Transpose Matrix is"<<endl;
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
            cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<"Upper Triangular Matrix is"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i>j)
                    cout<<0<<"\t";
                else
                    cout<<a[i][j]<<"\t";
            }
        cout<<"\n";
    }
    cout<<"Lower Triangular Matrix is"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i<j)
                    cout<<0<<"\t";
                else
                    cout<<a[i][j]<<"\t";
            }
        cout<<"\n";
    }
    cout<<"Diagonal Matrix is"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i==j)
                    cout<<a[i][j]<<"\t";
                else
                    cout<<0<<"\t";
            }
        cout<<"\n";
    }*/

    //Array as a pointer in 2D-Array 
    /*int m,n;
    cout<<"Enter Size of Matirx = \n";
    cin>>m>>n;
    int a[m][n],i,j;
    cout<<"Enter "<<m*n<<" elements =\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"Matrix is :-"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<*(*(a+i)+j)<<"\t";
        cout<<"\n";
    }*/

    /*int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    cout<<"Matrix is :-"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<*(*(a+i)+j)<<"\t";
        cout<<endl;
    }*/
    return 0;
}