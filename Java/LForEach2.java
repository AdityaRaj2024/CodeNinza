// Java program to illustrate
// for-each loop
package mypack;
class LForEach2
{
    public static void main(String[] args)
    {
        int[] marks = {74,38,65,82,54};
        // int highest_marks = maximum(marks);
        // System.out.println("The highest score is " + highest_marks);
        int max = marks[0];
        int min = marks[0];
        for (int num : marks)
        {
            if (num > max)
            {
                max = num;
            }
            if (num < min)
            {
                min = num;
            }
         }
         System.out.println("The highest score is " + max);
         System.out.println("The lowest score is " + min);
    }
      
}