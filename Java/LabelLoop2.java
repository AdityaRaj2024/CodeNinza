package mypack;;
public class LabelLoop2
{
    public static void main(String[] args)
    {
        int i,j;
        outer: for(i = 1; i < 5; i++)
        {
            System.out.print(i+"\t");
            for(j = 1; j < 3; j++)
            {
                System.out.print(j+"\t");
                    if(i == j)
                        break outer;
                System.out.println();
            }
            System.out.println();
        }
    }
}