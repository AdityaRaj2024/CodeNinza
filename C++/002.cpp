//2. WAP in c++ to find the largest number among the given number of list.
#include<iostream>
using namespace std;
class Number
{
    private:
        int s,i,gt,sm,a[];
        void getData()
        {
            cout<<"Enter Size of list = ";
            cin>>s;
        }
    public:
        void putData()
        {
            getData();
            int a[s];
            cout<<"Enter "<<s<<" Numbers = "<<endl;
            for(i=0;i<s;i++)
                cin>>a[i];
            gt=sm=a[0];
            for(i=0;i<s;i++)
            {
                if(a[i]>gt)
                    gt=a[i];
                if(sm>a[i])
                    sm=a[i];
            }
            cout<<"Largest Number = "<<gt<<endl;
            cout<<"Smallest Number = "<<sm;
        }
};
int main()
{
    Number num;
    // num.getData();
    num.putData();
    return 0;
}

/*#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter Size of list = ";
    cin>>s;
    int i,a[s],gt,sm;
    cout<<"Enter "<<s<<" Numbers = "<<endl;
    for(i=0;i<s;i++)
    {
        cin>>a[i];
    }
    gt=sm=a[0];
    for(i=0;i<s;i++)
    {
        if(a[i]>gt)
            gt=a[i];
        if(sm>a[i])
            sm=a[i];
    }
    cout<<"Largest Number = "<<gt<<endl;
    cout<<"Smallest Number = "<<sm;
    return 0;
}*/