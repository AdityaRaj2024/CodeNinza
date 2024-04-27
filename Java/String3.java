//methods of string class
package mypack;
class String3
{
    public static void main(String args[])
    {
        String s="Welcome To Java";
        //length() method
        // System.out.println(s.length());
        int len = s.length();
        System.out.println(len);
        // charAt() method
        System.out.println(s.charAt(4));
        // char c = s.charAt(4);
        // System.out.println(c);
        // System.out.println("Welcome To Java".charAt(4));
        //getChars() method
        char[] s2 = new char[7];
        s.getChars(5,10,s2,0);
        System.out.println(s2);
        // System.out.println("Welcome To Java".charAt(4));
        //substring() method
        System.out.println(s.substring(7));
        System.out.println(s.substring(7,11));
        //concat() method
        String s1=" Programming.";
        System.out.println(s.concat(s1));
        s1=s.concat(" Programming");
        System.out.println(s1);
        //replace method
        System.out.println(s.replace('a','A'));
        System.out.println(s.replace("To","In"));
        //toUpperCase() method.
        System.out.println(s1.toUpperCase());
        //toLowerCase() method.
        System.out.println(s1.toLowerCase());
        //indexOf() method
        System.out.println(s1.indexOf('o'));
        System.out.println(s1.indexOf('z'));
        //lastIndexOf()method
        System.out.println(s1.lastIndexOf('o'));
        System.out.println(s1.lastIndexOf('Y'));
        //trim() method.
        System.out.println(s1.trim());
        //toCharArray() method.
        System.out.println(s1.toCharArray());
    }
}