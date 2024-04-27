//WAP in java to input any string after that count number of vowels.
package mypack;
import java.util.Scanner;
class StringCountChr
{
    String str = new String();
    char n;
    int i,c,ccn,csc;
    Scanner sc = new Scanner(System.in);
    void inputData()
    {
        System.out.println("Enter Any String :- ");
        str=sc.nextLine();
    }
    void checkVwl()
    {
        c=0;
        // inputData();
        for(i=0;i<str.length();i++)
        {
            n=str.charAt(i);
            
                if((n=='a') || (n=='A')|| (n=='e')|| (n=='E')|| (n=='i')|| (n=='I')|| (n=='o')|| (n=='O')|| (n=='u')|| (n=='U'))
                    c++;
                else if((n>='A' && n<='Z') || (n>='a' && n<='z'))
                    ccn++;
                else
                    csc++;
            // switch(n)
            // {
                // case 'a':
                // case 'A':
                // case 'e':
                // case 'E':
                // case 'i':
                // case 'I':
                // case 'o':
                // case 'O':
                // case 'u':
                // case 'U':
                    // c++;
           // }
        }
        System.out.println("Number of Vowel :- "+c);
        System.out.println("Number of Consonent :- "+ccn);
        System.out.println("Number of Special Character :- "+csc);
    }
    
    
}
class String6
{
    public static void main(String[] args)
    {
        StringCountChr obj = new StringCountChr();
        obj.inputData();
        obj.checkVwl();
    }
}