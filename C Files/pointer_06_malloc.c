#include<stdio.h>
#include<stdlib.h>
void main()
{
    /*int a=10;float b=10.5;double c=20.45;
    void *p; //void or generic pointer
    p=&a;
    printf("Memory Address of a = %d\n",(int*)p);
    printf("Memory Address of a = %d\n",*(int*)p);
    p=&b;
    printf("Memory Address of b = %u\n",(float*)p);
    printf("value of b = %.2f\n",*(float*)p);
     p=&c;
    printf("Memory Address of c = %u\n",(double*)p);
    printf("Value of c = %.2lf\n",*(double*)p);*/
    
    //wap to input n numbers after that print using malloc() function
    /*int *p,n,i;
    printf("Enter Size of Array = ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("All Elements Are =\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));*/
   
    //wap in c to input n numbers after that delete any particular element according to position usimg malloc
    /*int i,n,po,*p;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Enter The Position For deletion = ");
        scanf("%d",&po);
    for(i=po-1;i<n;i++)
        *(p+i)=(p[i+1]);
    for(i=0;i<n-1;i++)
        printf("%d\n",*(p+i));*/

    /*int i,n,po,*p;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Enter The Position For deletion = ");
        scanf("%d",&po);
    for(i=po-1;i<n;i++)
        *(p+i)=*(p+i+1);
    printf("All Values Are =\n");
    for(i=0;i<n-1;i++)
    printf("%d\n",*(p+i));*/

    //wap n c to input n numbers after that insert any particular element according to position usimg malloc
    /*int i,n,new,po,*p;
    printf("How Many Number's To Input? ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("All Values Are =\n");
    for(i=0;i<=n-1;i++)
        printf("%d\t",*(p+i));
    printf("\n");
    printf("Enter New Number's = ");
    scanf("%d",&new);
    printf("Enter The Position For Addition = ");
    scanf("%d",&po);
    for(i=n;i>po-1;i--)
        *(p+i)= *(p+i-1);
    *(p+po-1)=new;
    printf("All Values Are =\n");
    for(i=0;i<=n;i++)
        printf("%d\t",*(p+i));*/

    //wap to sort in ascending order using pointer(malloc function)
    /*int n,i,j,s,*p;
    printf("Enter Length Of Array = ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                s=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=s;
            }
        }
    }
    printf("Sorted Array Are =\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(p+i));*/

    //wap to print all factors of numbers in array
    /*int n,i,j,*p;
    printf("Enter Length Of Array = ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<=n-1;i++)
    {
        printf("Factors Of %d is \n",*(p+i));
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
            	printf("%d\t",j);
        }
        printf("\n");
    }*/

    //wap in c to input n numbers after that input a number and search that particular element is found or not using malloc()
    /*int n,i,*p,*s,c=0;
    int a;
    s=&a;
    printf("Enter Length Of Array = ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Enter Any Searching Value = ");
    scanf("%d",s);
    for(i=0;i<n;i++)
    {
        // (*(p+i)==*s)
        if(*s==*(p+i))
            c++;
    }
    if(c>0)
        printf("%d is found %d times.",*s,c);
    else
        printf("%d is not found.",*s);*/
}