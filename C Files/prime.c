#include <stdio.h>
void main()
{

    // // ----------------prime numbers-------------
    // int num,i=2,flag=0;
    // printf("enter the no.=");
    // scanf("%d",&num);
    // while (i<num)
    // {
    //     if (num%i==0)
    //     { 
    //         flag=1;
    //         break;
    //     }
    //     i++;
    // }
    // if (0==flag)
    //   printf("prime");
    // else
    //   printf("non prime");


    //-------------------gcd of two integers--------------
    int n1 ,n2;
    int min;
    int i=1;
    printf("Enter the two positive numbers-----");
    scanf("%d%d",&n1,&n2);
    // finding minimum
    if (n1<n2)
       min=n1;
    else
     min=n2;
    // loop for findig the gcd
    while (i<=min)
    {
        if (n1/i==0 && n2/i==0)
        {
            printf("gcd is %d",i);
            break;
        }
        i++;
    }

        



}
