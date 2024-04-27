/*
    WAP to print 2D Array.
*/
package mypack;
class MltArray2
{
    public static void main(String args[])
    {
        int arr[][]=new int[3][2];
        arr[0][0]=1;
        arr[0][1]=2;
        arr[1][0]=3;
        arr[1][1]=4;
        arr[2][0]=5;
        arr[2][1]=6;
        System.out.println(arr[0][1]);
        System.out.println(arr[1][1]);
        System.out.println(arr[2][0]);
        System.out.println(arr.length);
        System.out.println(arr[0].length);
    }
}