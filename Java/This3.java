//WAP in java to implement this keyword - to return current class instance
package mypack;
class This3
{
    int a,b;
    This3()
    {
        a=10;
        b=20;
    }
    void get(This3 ts)
    {
        System.out.println("a :-  "+ts.a+"\nb :-  "+ts.b);
    }
    void show()
    {
        get(this);
    }
    public static void main(String[] args) 
    {
        This3 obj = new This3();
        obj.show();
    }
}