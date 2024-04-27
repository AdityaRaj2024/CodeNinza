/*
    18-05-2023
    Example of Super method
*/
// class P
// {
    // P()
    // {
        // super();
    // }
// }
// class C extends P
// {
    // C()
    // {
        // super();
    // }
// }


// class P
// {
    // void P()
    // {
        
    // }
    // void P(int x)
    // {
    
    // }
// }
// class C extends P
// {
    // void C()
    // {
        // super();  //super() must be the first line of statement
        // System.out.println("Child Constructor");
        
    // }
// }
// class S
// {
    // public static void main(String args[])
    // {
        // C o = new C();
    // }
// }


// class P
// {
    // void P() //constructor can have return type in java but it will treated as normal method.
    // {
        // System.out.println("Hello");
    // }
    // public static void main(String[] args)
    // {
        // P o = new P();
        // o.P();
    // }
// }


// class P
// {
    // //public P()    //constructor can have access specifiers in java
    // //private P()  //constructor can have access specifiers in java
    // //protected P()  //constructor can have access specifiers in java
    // P()
    // {
        // System.out.println("Hello");
    // }
    // public static void main(String[] args)
    // {
        // P o = new P();
        // //o.P(); //we cannot call constructor explicitely
    // }
// }

// class P
// {
    // public void method1()
    // {
        // super(); //super() method cannot be used with normal method , it uses with constructor only.
       // System.out.println("Hello"); 
    // }
    
// }
