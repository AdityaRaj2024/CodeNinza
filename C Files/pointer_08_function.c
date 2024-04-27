//call by value
/*#include<stdio.h>
void swapping(int a,int b) //formal parameter
{
    int temp ;
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping\nValue of a = %d\nValue of b = %d\n",a,b);
}
void main()
{
    int p,q;
    printf("Enter 2 Number's :\n");
    scanf("%d%d",&p,&q);
    printf("Before Swapping Value of Actual Parameter\np = %d\nq = %d\n",p,q);
    swapping(p,q);
    printf("After Calling Swapping Function Value of Actual Parameter\np = %d\nq = %d\n",p,q);
    //int near *p;
    //printf("size = %d",sizeof(p));
}*/

//call by reference
/*#include<stdio.h>
void swapping(int *a,int *b) //formal parameter
{
    int temp ;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After Swapping\nValue of a = %d\nValue of b = %d\n",*a,*b);
}
void main()
{
    int p,q;
    printf("Enter 2 Number's :\n");
    scanf("%d%d",&p,&q);
    printf("Before Swapping Value of Actual Parameter\np = %d\nq = %d\n",p,q);
    swapping(&p,&q);
    printf("After Calling Swapping Function Value of Actual Parameter\np = %d\nq = %d\n",p,q);
    //int near *p;
    //printf("size = %d",sizeof(p));
}*/

//WAP in c to input three numbers as pointer variable as parameeter with pointer after that find greatest and smallest number using return type function.
#include<stdio.h>
int findgreatest(int *a,int *b,int *c)
{
    int *gt;
    *gt=(*a>*b && *a>*c?*a:(*b>*c?*b:*c));
    return(*gt);
}
int findsmallest(int *a,int *b,int *c)
{
    int *sm;
    *sm=(*a<*b && *a<*c?*a:(*b<*c?*b:*c));
    //printf("%d\n",*sm);
    return(*sm);
}
void main()
{
    int a,b,c;
    printf("Enter Three Number's :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Smallest Number's = %d\n",findsmallest(&a,&b,&c));
    printf("Greatest Number's = %d\n",findgreatest(&a,&b,&c));
   
}