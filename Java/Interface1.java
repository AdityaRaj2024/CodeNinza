package mypack;
interface IntrBank 
{
    float rois();
    // float roic();
}
class SBI implements IntrBank 
{
    public float rois() 
    {
        return 9.6f;
    }
}
class PNB implements IntrBank 
{
    public float rois() 
    {
        return 9.5f;
    }
}
class Interface1 
{
    public static void main(String[] args) 
    {
        IntrBank b = new SBI();
        System.out.println("ROI " + b.rois());
        b = new PNB();
        System.out.println("ROI " + b.rois());
    }
}