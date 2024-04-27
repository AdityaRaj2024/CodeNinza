#include<stdio.h>
int s;
void input()
{
    printf("Enter Size Of Array = ");
    scanf("%d",&s);
}
int findlcm()
{
    int a[s],i,gt,lcm;
    printf("Enter %d Values =\n",s);
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
   for(i=0;i<s;i++)
   {
       if(a[i]>lcm)
           lcm=a[i];
   }
    for(i=0;i<s;i++)
    {
        while(lcm%a[i]!=0)
        lcm++;
    }
    return (lcm);
}
void main()
{
    input();
    //printf("H.C.F = %d\n",findhcf());
    printf("L.C.M. = %d\n",findlcm());
}
/*#include<stdio.h>
int n,f,c=0;
void input()
{
    printf("Enter Any Number = ");
    scanf("%d",&n);
}
int factor()
{
    int i;
    input();
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f+=i;
            c++;
        }
    }
    return(f,c);
}
void main()
{
    if(n==factor())
        printf("%d is a perfect number.\n",n);
    else
        printf("%d is a perfect number.\n",n);
    if(factor()==1)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
}*/
