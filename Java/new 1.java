package mypack;
class String2
{
    public static void main(String args[])
    {
        String s1 = new String("Welcome");
        String s2 = "Welcome";
        String s3 = "WELCOME";
        System.out.println(s1.equals(s2));
        System.out.println(s1.equals(s3));
        System.out.println(s1.equalsIgnoreCase(s2));
        System.out.println(s1.equalsIgnoreCase(s3));
    }
}