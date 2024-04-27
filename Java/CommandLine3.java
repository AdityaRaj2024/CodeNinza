// Java Program to Check for Command Line Arguments
package mypack;
class CommandLine3
{
    // Main driver method
    public static void main(String[] args)
    {
    // Checking if length of argsarray is greater than 0
        if (args.length> 0) 
        {
            // Print statements
            System.out.println("The command line arguments are:");
            // Iterating the argsarray
            // using for each loop
            for (String val: args)
            // Printing command line arguments
            System.out.println(val);
        }
        else
        // Print statements
        System.out.println("No command line "+ "arguments found.");
    }
}