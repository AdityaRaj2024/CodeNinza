// Java Program to Create a Dynamic Array
package mypack;
// import java.util.Scanner;
class Array
{
    int arr[],ct,i;
    Array(int length) //to generate length of array
    {
        arr=new int[length];
    }
    void printArray() //to print Array
    {
        for(i=0;i<ct;i++)
        {
            System.out.print(arr[i] + "\t");
        }
    }
    void insert(int element)
    {
        if (arr.length == ct)
        {
            int newArr[] = new int[ct+2];
            for (int i = 0; i < ct; i++) 
            {
                newArr[i] = arr[i];
            }
            arr = newArr;
        }
        arr[ct++] = element;
    }
}
class ArrayDynm
{
    public static void main(String args[])
    {
        Array num = new Array(3);
        num.insert(15);
        num.insert(05);
        num.insert(22);
        num.insert(34);
        num.insert(57);
        num.insert(49);
        num.printArray();
    }
}