//WAP in java to input any string after that print the greatest and smallest character.
package mypack;
import java.util.Scanner;
class StringCountChr
{
    String str;
    int i;
    Scanner sc = new Scanner(System.in);
    void checkGrt()
    {
        System.out.println("Enter Any String :- ");
        str=sc.nextLine();
        char ch = str.charAt(0);
        char cg= str.charAt(0);
        char cs= str.charAt(0);
        for(i=0;i<str.length();i++)
        {
            char n=str.charAt(i);
            if((n>='A' && n<='Z') || (n>='a' && n<='z'))
            {
                if(str.charAt(i)>ch)
                    cg=str.charAt(i);
                else if(str.charAt(i)<ch)
                    cs=str.charAt(i);
            }
        }
        System.out.println("Greatest Character :-  "+cg);
        System.out.println("Smallest Character :-  "+cs);
    }
}
class String7
{
    public static void main(String [] args)
    {
        StringCountChr obj = new StringCountChr();
        obj.checkGrt();
    }
}