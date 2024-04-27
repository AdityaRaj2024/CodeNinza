//WAP in java to implement this keyword
package mypack;
class This1
{
    int a,b;
    This1(int a,int b)
    {
        this.a=a;
        this.b=b;
    }
    void show()
    {
        System.out.println("a :-  "+a+"\nb :-  "+b);
    }
    public static void main(String[] args) 
    {
        This1 obj = new This1(15,25);
        obj.show();
    }
}