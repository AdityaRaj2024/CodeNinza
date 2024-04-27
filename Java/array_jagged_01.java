//Example of array
package mypack;

class array_jagged_01 {
    public static void main(String[] args) {
        int arr[][] = new int[5][];
        arr[0] = new int[1];
        arr[1] = new int[2];
        arr[2] = new int[3];
        arr[3] = new int[4];

        arr[0][0] = 1;
        arr[1][0] = 10;
        arr[1][1] = 100;
        arr[2][0] = 1000;
        arr[2][1] = 10000;
        arr[2][2] = 10000;
        arr[3][0] = 11111;
        arr[3][1] = 111;
        arr[3][2] = 11;
        arr[3][3] = 11111;

        for(int element[]:arr)
        {
            for(int e:element)
            {
                System.out.print(e + " ");
            }
            System.out.println(" ");
        }
        System.out.println("Array Elements Are :- ");
        System.out.println(arr[1]);
        System.out.println(arr[3]);
        System.out.println(arr[4]);
    }
}
