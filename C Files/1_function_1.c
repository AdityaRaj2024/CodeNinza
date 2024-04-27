#include<stdio.h>
//without function prototype
/*void check_prime()
{
    int n,i,c=0;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("%d Is A Prime Number",n);
    else
    printf("%d Is Not A Prime Number",n);
}
void main()
{
    check_prime();
}*/


//using function Prototype
/*void check_prime();//function prototype
void main()
{
    check_prime();
}

void check_prime()
{
    int n,i,c=0;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==1)
    printf("%d Is A Prime Number",n);
    else
    printf("%d Is Not A Prime Number",n);

}*/
