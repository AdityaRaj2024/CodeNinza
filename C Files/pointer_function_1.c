//WAP in c to input three numbers as pointer variable as parameeter with pointer after that find greatest and smallest number using return type function.
/*#include<stdio.h>
int findgreatest(int *a,int *b,int *c)
{
    int *gt;
    *gt=(*a>*b && *a>*c?*a:(*b>*c?*b:*c));
    return(*gt);
}
// int findsmallest(int *a,int *b,int *c)
// {
//     int *sm;
//     *sm=(*a<*b && *a<*c?*a:(*b<*c?*b:*c));
//     //printf("%d\n",*sm);
//     return(*sm);
// }
void main()
{
    int a,b,c;
    printf("Enter Three Number's :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest Number = %d\n",findgreatest(&a,&b,&c));
    //printf("Smallest Number's = %d\n",findgreatest(&a,&b,&c));
}*/

//wap in c to create a function named checkamicable which accepts two parameter as pointer type after that check both number is amicable or not.
/*#include<Stdio.h>
void checkamicable(int *a,int *b)
{
    int i,s1=0,s2=0;
    for(i=1;i<=*a/2;i++)
    {
        if(*a%i==0)
            s1+=i;
    }
    for(i=1;i<=*b/2;i++)
    {
        if(*b%i==0)
            s2+=i;
    }
    if(s1==*b && s2==*a)
        printf("%d and %d are amicable.",*a,*b);
    else
        printf("%d and %d are not amicable.",*a,*b);
}
void main()
{
    int p,q;
    printf("Enter Two Number's :\n");
    scanf("%d%d",&p,&q);
    checkamicable(&p,&q);
}*/