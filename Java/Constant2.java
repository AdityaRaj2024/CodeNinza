//constant in java using static and final modifier
package mypack;
class Constant2
{
    //declaring constant
    static final double PRICE=384.90;
    public static void main(String args[])
    {
        int unit;
        double total_bill;
        //PRICE=400; //give error
        unit = 75;
        total_bill=PRICE*unit;
        System.out.println("The total amount you have to deposit is : "+total_bill);
    }
}