#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int m,y;
    cout<<"Enter Month Number = ";
    cin>>m;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"31 Days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"30 Days";
        break;
    case 2:
        cout<<"Enter Year :- ";
        cin>>y;
        if((y %4==0 && y%100 !=0)||(y%400==0))
            cout<<"29 Days";
        else
            cout<<"28 Days";
        break;
    default:
        cout<<"Invalid Entry";
    }
    return 0;
}

