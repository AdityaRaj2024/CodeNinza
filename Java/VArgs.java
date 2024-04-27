/*
 * Variable Length Arguments/vargs method.
 * It can contain Zero, one or Several arguments during runtime according to user's requirement.
 * Is is implemented with he help of three dots(...).
 * It can be overloaded.
 * Any method can have only one variable length arguments.
 * It must be the last argument of that method.
 * NOTE:-
 *      1)findSum(int ... args1,float ... args2)//it is incorrect.
 *      2)findSum(int ... args1,String name)//it is incorrect.
 *      2)findSum(String name,int ... args1)//it is correct.
 */
//WAP to find sum of several argument using variable length argument.
package mypack;

class VariableLength {
    int sum;

    void findSum(int... arg) {
        sum = 0;
        System.out.println("Total Number of Arguments " + arg.length);
        for (int i : arg) {
            sum += i;
        }
        System.out.println("Sum of "+arg.length+" Elements :- " + sum);
    }

    void findSum(float... arg) {
        float sum = 0;
        System.out.println("Total Number of Arguments " + arg.length);
        for (float i : arg) {
            sum += i;
        }
        System.out.println("Sum of "+arg.length+" Elements :- " + sum);
    }
}

class VArgs {
    public static void main(String arg[]) {
        VariableLength varb = new VariableLength();
        System.out.println("Sum of Integer Numbers :- ");
        varb.findSum();
        varb.findSum(11, 18);
        varb.findSum(87, 65, 45, 40, 75);
        System.out.println("\nSum of Float Numbers :- ");
        varb.findSum();
        varb.findSum(21.6f, 18.75f,45.74f);
        varb.findSum(97.7f, 65.4f, 45.6f, 40.8f);
    }
}