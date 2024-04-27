#include <stdio.h>
main()
{
    int num,i=2,flag=0;
    printf("enter the no.=");
    scanf("%d",&num);
    while (i<num)
    {
        if (num%i==0)
        { 
            flag=1;
            break;
        }
        i++;
    }
    if (0==flag)
      printf("prime");
    else
      printf("non prime");
}