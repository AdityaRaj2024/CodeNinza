#include<stdio.h>
#define size 10
void main()
{
    //wap to input n numbers after that print using pointer
    /*int a[size],i,*p;
     //p=a;
     p=&a[0];
     printf("Enter %d Number's =\n",size);
     for(i=0;i<size;i++)
     {
         scanf("%d",p+i);
     }
     printf("All Elements Are =\n");
     for(i=0;i<size;i++)
    {
         printf("%d\t",*(p+i));
    }*/

	/*int a[size],i;
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",a+i);
    }
    printf("All Elements Are =\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",*(a+i));
    }*/

    /*int a[size],i,*p;
    //p=a;
    p=&a[0];
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",p);
        p++;
    }
    printf("All Elements Are =\n");
    p=a;
    for(i=0;i<size;i++)
    {
        printf("%d\t",*(p+i));
    }*/
    
    /*int n,*p,i;
    printf("Enter Size Of Array = ");
    scanf("%d",&n);
    int a[n];
    p=&a[0];
    printf("Enter %d Elements In Array :\n",n);
     for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("All Elements Are =\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }*/

    //wap to input n numbers after that print in reverse order using pointer
    /*int n,i,*p;
    printf("Enter Size Of Array = ");
    scanf("%d",&n);
    int a[n];
     //p=a;
     p=&a[0];
     printf("Enter %d Number's =\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",p+i);
     }
     printf("All Elements Are =\n");
     for(i=n-1;i>=0;i--)
    {
         printf("%d\n",*(p+i));
    }*/

    //wap to input 10 numbers after that print only prime numbers using pointer
    /*int a[size],i,j,*p;
    p=a;
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    printf("All Prime Number's Are \n");
    for(i=0;i<size;i++)      
    {
        int c=0;
        for(j=1;j<=*(p+i)/2;j++)
        {
            if(*(p+i)%j==0)
            c++;
        }
        if(c==1)//&& *(a+i)!=1)
        printf("%d\t",*(p+i));
    }*/
       
    /*int a[size],i,c,j,*p;
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",a+i);
    }
    printf("All Prime Number's Are \n");
    for(i=0;i<size;i++)
    {
        c=0;
        for(j=1;j<=*(a+i)/2;j++)
        {
            if(*(a+i)%j==0)
            c++;
        }
        if(c==1)
            printf("%d\t",*(a+i));
        c=0;
    }*/

    //int a[size],i,c,j,*p;
    /*int n,*p,i,c,j;
    printf("Enter Size Of Array = ");
    scanf("%d",&n);
    int a[n];
    //p=&a;
    printf("Enter Array Element :\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("All Prime Number's Are \n");
    for(i=0;i<n;i++)
    {
       // c=0;
        for(j=1;j<=*(a+i)/2;j++)
        {
            if(*(a+i)%j==0)
            c++;
        }
        if(c==1)
            printf("%d\t",*(a+i));
        c=0;
    }*/

    //wap to input 10 numbers after that print only perfect using pointer
    /*int a[size],i,c,j,*p;
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",a+i);
    }
    printf("All Perfect Number's Are \n");
    for(i=0;i<size;i++)
    {
        c=0;
        for(j=1;j<=*(a+i)/2;j++)
        {
            if(*(a+i)%j==0)
            c+=j;
        }
        if(c==*(a+i))
            printf("%d\t",*(a+i));
        c=0;
    }*/

    //wap in c to input 10 number's after that sort  in ascending order using pointer
    /*int s,i,j,n;
    printf("Enter Size Of Array = ");
    scanf("%d",&s);
    int a[s];
    printf("Enter %d Number's =\n",s);
    for(i=0;i<s;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<=s-2;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(*(a+i)>*(a+j))
            {
                n=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=n;
            }
        }
    }
    printf("Sorted Array :\n");
    for(i=0;i<s;i++)
        printf("%d\n",*(a+i));*/

    //wap in c to input 10 number's after that print second highest number
    /*int a[size],i,j,n,gt=0;
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<=size-2;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(a+i)>*(a+j))
            {
            n=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=n;
            }
        }
    }
    printf("Greatest Number = ");
    printf("%d\n",*(a+size-1));
    printf("Second Greatest Number = ");
    printf("%d\n",*(a+size-2));
    printf("Smallest Number = ");
    printf("%d\n",*(a));*/

    /*int n,*p,i,m1=0,m2=0;
    printf("Enter Size Of Array = ");
    scanf("%d",&n);
    int a[n];
    p=&a[0];
    //p=(int *)malloc(sizeof(int)*n);
    printf("Enter Array Element :\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>m1)
        {
            m2=m1;
            m1=*(p+i);
        }
        else if(*(p+i)<m1 && *(p+i)>m2)
            m2=*(p+i);
    }
    printf("Greatest Number = %d\n",m1);
    printf("Second Greatest Number = %d\n",m2);*/
}
