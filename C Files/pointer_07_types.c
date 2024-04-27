#include<Stdio.h>
void main()
{
    //Null Pointer
    /*int *p=NULL; //null pointer
    //printf("Default Values of Null Pointer = %d\n",*p);
    printf("Size of Null Pointer = %d",sizeof(p));*/

    //void or generic pointer
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
    /*void *p; //void or generic pointer
    int a=10;
    float b=10.5;
    double c=20.45;
    char ch=65;
    p=&a;
    printf("value of a = %d\n",*(int*)p);
    p=&b;
    printf("value of b = %.2f\n",*(float*)p);
    p=&c;
    printf("Value of c = %.2lf\n",*(double*)p);
    p=&ch;
    printf("Values of ch = %c\n",*(char *)p);*/

    //double pointer
    /*int a,*p,**q,***r,****s;
    a=10;
    p=&a;
    q=&p;
    r=&q;
    s=&r;
    printf("Address of a = %u\n",&a);
    printf("Address of a = %u\n",p);
    printf("Address of p = %u\n",q);
    printf("Address of q = %u\n",r);
    printf("Address of r = %u\n",s);
    printf("Values of a = %d\n",a);
    printf("Value of a = %d\n",*p);
    printf("Value of a = %d\n",**q);
    printf("Value of a = %d\n",***r);
    printf("Value of a = %d\n",****s);*/
}