package mypack;
class LabelLoop3
{
    public static void main(String args[])
    {
        loop:for(int i=1;i<50;i++)
        {
            System.out.println("   ");
            if(i>=10)
                break;
            for(int j=1;j<50;j++)
            {
                System.out.print(" * ");
                if(i==j)
                    continue loop;
            }
        }
    }
}