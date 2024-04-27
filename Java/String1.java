package mypack;
class String1
{
    public static void main(String args[])
    {
        String s1 = new String("CIMAGE");
        String s2 = new String("CIMAGE");
        System.out.println(s1==s2);
        System.out.println(s1.equals(s2));
        String s3 = new String("Aditya");
        String s4 = new String("RohitA");
        System.out.println(s3==s4);
        System.out.println(s3.equals(s4));
    }
}