package mypack;
interface SBI
{
    float getInterest1();
}
interface CBI
{
    float getInterest2();
}
interface PNB
{
    float getInterest3();
}
interface Bank extends SBI,PNB,CBI
{
    void show();
}
class ReserveBank implements Bank
{
    public void show()
    {
        System.out.println("Hello.");
    }
    public float getInterest1()
    {
        return 8.4f;
    }
    public float getInterest2()
    {
        return 9.3f;
    }
    public float getInterest3()
    {
        return 8.7f;
    }
}
class InterfaceB1
{
    public static void main(String[] args)
    {
        ReserveBank rb = new ReserveBank();
        rb.show();
        System.out.println("SBI Interest Rate :-  "+rb.getInterest1()+" %");
        System.out.println("CBI Interest Rate :-  "+rb.getInterest2()+" %");
        System.out.println("PNB Interest Rate :-  "+rb.getInterest3()+" %");
    }
}