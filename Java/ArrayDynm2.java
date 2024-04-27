package mypack;
import java.util.Scanner;
class Dynamic_Array
{
	private int arr[],size;
	Scanner sc = new Scanner(System.in);
	public Dynamic_Array(int size)
	{
		this.size = size;
		arr = new int[size];
	}
	void input()
	{
		System.out.println("Enter "+size+" Array element: ");
		for(int i=0;i<size;i++)
		{
			arr[i] = sc.nextInt();
		}
	}
	void output()
	{
		System.out.println("Array element: ");
		for(int i:arr)
		{
			System.out.print(i+"\t");
		}
		System.out.println(" ");
	}
	void insert()
	{
        int a[] = new int[size+1];
        char ch;
        System.out.println("Do You Want to Enter More Elements? y for yes.");
        ch=sc.next().charAt(0);
		// int a[] = new int[size+1];
		for(int i=0;i<size;i++)
		{
			a[i]=arr[i];
		}
		arr = a;
        while(ch=='y' || ch=='Y')
        {
            System.out.println("Enter "+size+" more Array element: ");
            for(int i=size;i<size+1;i++)
            {
                arr[i] = sc.nextInt();
            }
        }
	}
}
class ArrayDynm2
{
	public static void main(String args[])
	{
		Dynamic_Array ad = new Dynamic_Array(5);
		ad.input();
		ad.output();
        // char ch;
        // System.out.println("Do You Want to Enter More Elements? y for yes.");
        // ch=sc.next().charAt(0);
        // while(ch=='y' || ch=='Y')
            ad.insert();
		ad.output();
	}
}