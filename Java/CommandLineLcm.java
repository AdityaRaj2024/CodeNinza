/*
	This is Command Line program in JAVA for finding hcf and lcm of entered number - in Command Line Argument.
    14/04/2023
*/
package mypack;
public class CommandLineLcm
{
    public static void main(String args[])
    {
        int a,hcf,lcm,max,min,i;
        max=Integer.parseInt(args[0]);
        min=Integer.parseInt(args[0]);
        if(args.length>0)
        {
            System.out.println("Number of Enteries = "+args.length);
            for(i=0;i<args.length;i++)
            {
                if(Integer.parseInt(args[i])>max)
                    max=Integer.parseInt(args[i]);
                if(Integer.parseInt(args[i])<min)
                    min=Integer.parseInt(args[i]);
             }
            lcm=max;
            int l = Integer.parseInt(args[i]);
            while(i<args.length)
            {
                if(l%lcm==0)
                    i++;
                else
                {
                    lcm=l%lcm;
                    i++;
                }
            }
            System.out.println("Greatest Number is "+max);
            System.out.println("Smallest Number is "+min);
            System.out.println("LCM of "+args.length+" entries = "+lcm);
        }
        else
		{
			System.out.println("No Command Line Argument is Passed");
		}
    }
}