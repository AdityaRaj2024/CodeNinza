/*
    RECURSIVE FUNCTION:
    -> A function is called recursive if it calls itself. This process is called recursion.
    -> Its main objective is to solve complex problem in computer science.
    -> Its coding is small rather than iterative function.
    -> Its execution speed is fast rather than iterative function.
    -> It doesn't contain looping statement.

    e.g. :-  int xyz(){
        int xyz(); // call itself
    }

    table,palindrome,armstrong,factorial.
    
*/
#include<stdio.h>

int sum1(int n)
{
    static int sum=0;
    if(n>0)
    {
        int d=n%10;
        sum +=d;
        n=sum1(n/10);
    }
    return(sum);
}

int table(int n,int i)
{    
    if(i<=10)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        return table(n,i+1);
    }
    else
        return;   
}


int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}

void main()

{
    int n,t;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Sum of digits is %d\n",sum1(n));
    printf("%d\n",table(15,1));
    printf("Factorial = %d\n",factorial(8));
    //return 0;
}