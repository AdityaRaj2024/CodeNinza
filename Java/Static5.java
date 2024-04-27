//WAP in java to count number of objects.
package mypack;
class Static5
{
    static int count=0;
    Static5()
    {
        count++;
    }
    static void show()
    {
        System.out.println("No. of Object :- "+count);
    }
    public static void main(String args[])
    {
        Static5 a,b,c,d,e;
        a=new Static5();
        b=new Static5();
        c=new Static5();
        d=new Static5();
        show();
    }
}