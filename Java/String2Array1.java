/*
    Array Examle two-dimensional array
    01-05-2023
*/
package mypack;
class String2Array1
{
    public static void main(String[] args)
    {
        //int i,j;
        String[][] jW = {{"alpep","argneo","rgaeps"},{"apple","orange","grapes"}};
        System.out.println("Elements stored in array are : ");
        //using simple for loop
        // for(i=0;i<2;i++)
        // {
            // for(j=0;j<3;j++)
            // {
                // System.out.print(jW[i][j]+"\t");
            // }
            // System.out.print("\n");
        // }
        // for(i=0;i<jW.length;i++)
        // {
            // for(j=0;j<jW[i].length;j++)
            // {
                // System.out.print(jW[i][j]+"\t\t");
            // }
            // System.out.println();
        // }
        
        //using for each loop
        System.out.println("Fruits are: ");
        for (String[] i : jW)
        {
            for (String j : i)
            {
                System.out.println(j);
            }
        }
    }
}