/*
    15-09-2023
    Quick Sort(partition Sort) :- 
    1)quick sort also known as partition sort.
    2)It is one of the fastest sorting technique.
    3)It was developed by 'Hoare' in 1962.
    4)It is fastest because it works by following a special algorithm called "Divide & conquer".
    5)Actually the process follow under Divide N Conquer is to fix a position and split the list into two sub_list and follow the same process once again until all values not fixed on their proper position.
        
*/

#include<stdio.h>
#define s 5
int split(int n[],int min,int max)
{
    int i,j,key,t;
    key=n[min];
    i=min+1;
    j=max;
    while(i<=j)
    {
        while(n[i]<=key)
            i++;
        while(n[j]>key)
            j--;
        if(i<j)
        {
            t=n[i];
            n[i]=n[j];
            n[j]=t;
        }
    }
    t=n[min];
    n[min]=n[j];
    n[j]=t;
    return j;
}

void quicksort(int n[],int min,int max)
{
    int z;
    if(min<=max)
    {
        z=split(n,min,max);
        quicksort(n,min,z-1);
        quicksort(n,z+1,max);
    }
}

void main()
{
    int a[s],i;
    printf("Enter %d Number's :- \n",s);
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,s-1);
    printf("After sorting in ascending order \n");
    for(i=0;i<s;i++)
        printf("%d\t",a[i]);
}

// #include <stdio.h>
// #include <stdlib.h>

// #define s 5

// int split(int n[], int min, int max) {
//     int i, j, key, t;
//     key = n[min];
//     i = min + 1;
//     j = max;
//     while (i <= j) {
//         while (n[i] < key || (n[i] == key && i <= max))
//             i++;
//         while (n[j] > key || (n[j] == key && j > min))
//             j--;
//         if (i < j) {
//             t = n[i];
//             n[i] = n[j];
//             n[j] = t;
//         }
//     }
//     t = n[min];
//     n[min] = n[j];
//     n[j] = t;
//     return j;
// }

// void quicksort(int n[], int min, int max) {
//     int z;
//     if (min < max) {
//         z = split(n, min, max);
//         quicksort(n, min, z - 1);
//         quicksort(n, z + 1, max);
//     }
// }

// int main(void) {
//     int a[s], i;
//     printf("Enter %d Numbers: \n", s);
//     for (i = 0; i < s; i++)
//         scanf("%d", &a[i]);
//     quicksort(a, 0, s - 1);
//     printf("After sorting in ascending order:\n");
//     for (i = 0; i < s; i++)
//         printf("%d\t", a[i]);
//     return 0;
// }


// #include<stdio.h>
// void printarray(int* A,int n){
//     for(int i=0; i<n; i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");
// }
// int partition(int A[],int low, int high){
//     int pivot = A[low];
//     int i= low+1;
//     int j= high;
//     int temp;
//     do{
//     while(A[i]<=pivot){
//         i++;
//     }
//     while(A[j]>pivot){
//         j--;
//     }
//     if(i<j){
//         temp=A[i];
//         A[i]=A[j];
//         A[j]=temp;
//     }
//     }while(i<j);
//     temp=A[low];
//     A[low]=A[j];
//     A[j]=temp;
//     return j;
    
// }

// void QuickSort(int A[],int low,int high)
// {
//     int partitionIndex;

//     if(low<high){
//     partitionIndex = partition(A, low, high);
//     QuickSort(A, low, partitionIndex-1);//sort left subarray
//     QuickSort(A, partitionIndex+1, high); //sort right subarray
    
//     }
// }

// int main(){
//     int A[]={4,3,8,5,9,7};
//     int n=6;
//     printarray(A,n);
//     QuickSort(A,0,n-1);
//     printarray(A,n);
//     return 0;
// }