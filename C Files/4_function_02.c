/*#include<stdio.h>
int findadd(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void main()
{
    //printf("Addition = %d",findadd(10,13));
    int a,b;
    printf("Enter 2 Number's =\n");
    scanf("%d%d",&a,&b);
    printf("Addition = %d",findadd(a,b));
}*/

//convert decimal to binary
/*#include<stdio.h>
int convertbin(int n)
{
    int d,i=1;
    long bin=0;
    while(n>0)
    {
        d=n%2;
        n/=2;
        bin=bin+d*i;
        i*=10;
    }
    return bin ;
}
void main()
{
    //printf("Binary Digit of = %d\n",convertbin(45));
    int n;
    printf("Enter Any Decimal Digit = ");
    scanf("%d", &n);
    printf("Binary Digit of %d is %d\n",n,convertbin(n));
}*/

// convert binary to decimal
/*#include <stdio.h>
 int convertdec(int n)
 {
    int d, dec = 0, i = 1;
    while (n > 0)
    {
        d = n % 10;
        dec = dec + d * i;
        i = i * 2;
        n = n / 10;
    }
    return (dec);
 }
 void main()
 {
    //printf("Decimal Number = %d",convertdec(110101));
    int n;
    printf("Enter Binary Digit = ");
    scanf("%d", &n);
    printf("Decimal Number = %d",convertdec(n));
 }*/

 // convert oct to decimal
/*#include <stdio.h>
int convertdec(int n)
{
    int d, dec = 0, i = 1;
    while (n > 0)
    {
        d = n % 10;
        dec = dec + d * i;
        i = i * 8;
        n = n / 10;
    }
    return dec ;
}
void main()
{
    //printf("Decimal Number = %d",convertdec(67543));
    int n;
    printf("Enter octal Digit = ");
    scanf("%d", &n);
    printf("Decimal Number = %d",convertdec(n));
}*/

//convert decimal to octal
/*#include<stdio.h>
int convertoct(int n)
{
    int d,oct=0,i=1;
    while(n>0)
    {
        d=n%8;
        n/=8;
        oct=oct+d*i;
        i*=10;
    }
    return (oct) ;
}
void main()
{
    printf("Octal Digit = %d",convertoct(8795));
    // int n;
    // printf("Enter Any Decimal Digit = ");
    // scanf("%d", &n);
    // printf("Octal Digit of %d is %d",n,convertoct(n));
}*/

/*#include<stdio.h>
char *convert_upr(char s[20])
{
    int i;
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
        return (s);
}
char *convert_lwr(char s[20])
{
    int i;
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    return s;
}
char *convert_ppr(char s[20])
{
    int i;
    if(s[0]>='a' && s[0]<='z')
        s[i]-=32;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]>='a'&& s[i+1]<='z')
                s[i+1]-=32;
            i++;
        }
        else
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    return s;
}
void main()
{
    char str[20];
    printf("Enter A String = ");
    gets(str);
    printf("Lower case = %s\n",convert_lwr(str));
    // printf("Proper case = %s\n",convert_ppr(str));
    printf("Upper case = %s\n",convert_upr(str));
    printf("Proper case = %s\n",convert_ppr(str));
}*/