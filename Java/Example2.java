//Example of Boxing and Unboxing

//package mypack;

class Example2 {
    public static void main(String args[]) {
        // Converting int into Integer
        int a = 15;
        // Integer i=Integer.valueOf(a);//converting int into Integer explicitly
        Integer a2 = Integer.valueOf(a);// Boxing
        // Integer integer = Integer(i);
        Integer j = a;// autoboxing, now compiler will write Integer.valueOf(a) internally
        // Converting Integer to int
        // Integer u=new Integer(3);
        // int n=u.intValue();//converting Integer to int explicitly
        // int g=u;//unboxing, now compiler will write a.intValue() internally
        System.out.println(a + "\t" + a2 + "\t" + j);
        // System.out.println(u+"\t"+n+"\t"+g);
    }

}