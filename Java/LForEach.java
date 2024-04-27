package mypack;
import java.util.Scanner;
class LForEach
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int arr[]={1,11,45,745,541,1263};
        String lang[] = {"Java","C","C++","Python","C#"};
        for(String s : lang)
        {
            System.out.print(s+"\t");
        }
        System.out.println();
        for(int i : arr)
        {
            System.out.print(i+"\t");
        }
    }
}