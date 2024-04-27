/*
    Date - 13/04/2023;
    1st class of class and object
*/
/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input()
    {
        cout<<"Enter Number : ";
        cin>>x;
    }
    void show()
    {
        cout<<"Entered Data = "<<x<<endl;
    }
};
int main()
{
    test t;
    t.input();
    t.show();

    return 0;
}*/

/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    void input()
    {
        cout<<"Enter Number : ";
        cin>>x;
    }
    public:
    void show()
    {
        input();
        cout<<"Entered Data = "<<x<<endl;
    }
};
int main()
{
    test t;
    //t.input();
    t.show();
    return 0;
}*/

//parameterized function
/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input(int n)
    {
        x=n;
    }
    void show()
    {
        cout<<"Entered Data = "<<x<<endl;
    }
};
int main()
{
    test t;
    t.input(45);
    t.show();
    return 0;
}*/

//Defining method outside the class
/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void show();
    void input();
};
    void test::input()
    {
        cout<<"Enter Number : ";
        cin>>x;
    }
    void test::show()
    {
        cout<<"Entered Data = "<<x<<endl;
    }
int main()
{
    test t;
    t.input();
    t.show();
    //cout<<t.x; // Error ,We cannot access the private data & method.
    return 0;
}*/

/*#include<iostream>
using namespace std;
class test
{
     public:
    int x;
    void show();
    void input();
};
    void test::input()
    {
        cout<<"Enter Number : ";
        cin>>x;
    }
    void test::show()
    {
        cout<<"Entered Data = "<<x<<endl;
    }
int main()
{
    test t;
    t.input();
    t.show();
    cout<<t.x; 
    return 0;
}*/

/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input(int n)
    {
        x=n;    //here x is class data and n is local method data of input method
    }
     void show()
    {
        cout<<"Value = "<<x<<endl;
    }
};
   
int main()
{
    test t;
    t.input(45);
    t.show();
    return 0;
}*/

/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    public:
    void input(int x)
    {
        //this->x=x;
        test::x=x;
    }
     void show()
    {
        cout<<"Value = "<<x<<endl;
    }
};
   
int main()
{
    test t;
    t.input(45);
    t.show();
    return 0;
}*/