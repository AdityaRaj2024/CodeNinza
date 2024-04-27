package mypack;
class String2
{
    public static void main(String args[])
    {
        String s1 = "Welcome";
        String s2 = new String("Welcome");
        String s3 = "Welcome";
        String s4 = "WELCOME";
        String s5 = "Welcome To Java";
        System.out.println(s1.equals(s2)); //true
        System.out.println(s2.equals(s4)); //false
        System.out.println(s1.equalsIgnoreCase(s2));//true
        System.out.println(s1.equalsIgnoreCase(s4)); //true
        System.out.println(s1==s2);//false
        System.out.println(s2==s4); //false
        System.out.println(s1==s3); //true
        System.out.println(s3==s4); //false
        System.out.println(s1.compareTo(s2)); //Zero
        System.out.println(s1.compareTo(s5)); //Negaive
        System.out.println(s5.compareTo(s4)); //positive
        System.out.println(s5.compareTo(s3)); //positive
        System.out.println(s1.compareTo(s4)); //positive
        System.out.println(s4.compareTo(s2)); //negative
        System.out.println(s4.compareToIgnoreCase(s2)); //Zero
        System.out.println(s4.compareToIgnoreCase(s5)); //Negative
    }
}