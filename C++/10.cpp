// 10. Write a program for printing a table of a given number using function with parameter and no return value.
#include<iostream>
using namespace std;
void table(int n)
{
    int i;
    cout<<"Multiplication Table = "<<endl;
    for(i=1;i<=10;i++)
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
}
int main()
{
    int m;
    cout<<"Enter Any Number = ";
    cin>>m;
    table(m);
    return 0;
}