#include<stdio.h>
/*void count()
{
    static int x=0;
    x++;
    printf("%d\n",x);
}*/
void test()
{
    extern int x;
    printf("%d\n",x);
}
int x=87;
void main()
{
    /*auto int x=20;
    printf("%d",x);*/
    /*register int x=20;
    printf("%d",x);*/
    /*count();
    count();
    count();
    count();
    count();
    count();*/
    test();
    printf("%d",x);
}