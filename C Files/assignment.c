/*#include<stdio.h>
void lcm(int a,int b,int c)
{
    int lcm,hcf;
    lcm=a>b &&  a>c?a:(b>c?b:c);
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
        lcm++;
    hcf=a<b && a<c ? a:(b<c ? b: c);
    while(a % hcf != 0 || b % hcf !=0 || c % hcf != 0)
        hcf--;
    printf("H.C.F = %d\n",hcf);
    printf("L.C.M. = %d\n",lcm);
}
// void main()
// {
//     lcm(10,15,12);
// }
void main()
{
    int a,b,c;
    printf("Enter Three Number's =\n");
    scanf("%d%d%d",&a,&b,&c);
    lcm(a,b,c);
}*/

#include<string.h>
#include<stdio.h>
//#define size 4
void main()
{
    /*int n;
    printf("Enter Number of String's = ");
    scanf("%d",&n);
    char str[n][30];
    char temp[30];
    int i,j;
    printf("Enter %d Strings =\n",n);
    for(i=0;i<n;i++)
    //gets(str[i]);
        scanf("%s",str[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Sorted Strings Are =\n");
    printf("In Ascending Order =\n");
    for(i=0;i<n;i++)
        printf("%d. %s\n",i+1,str[i]);
    printf("In Descending Order =\n");
    for(i=n-1;i>=0;i--)
        printf("%d. %s\n",i+1,str[i]);
}*/

//call by reference
/*#include<stdio.h>
//#include<stdlib.h>
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
}*/

//call by value
/*#include<stdio.h>
//#include<stdlib.h>
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
}*/

/*#include<stdio.h>
void arithmetic (int *p,int *q)
{
    int sum,sub,multi,div;
    sum=*p + *q;
    sub=*p - *q;
    multi=*p * *q;
    div=*p / *q;
}
void main()
{
    arithmetic(10,18);
}*/