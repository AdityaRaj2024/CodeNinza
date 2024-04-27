/*#include<stdio.h>
// typedef enum color
// {
//     red=4,
//     green=8,
//     blue=1,
//     orange,
// } color;
//enum color {red=4,green =8,blue=5};
enum name {aaa,bbb,ccc,ddd,eee};
void main()
{
    //enum color c; //enumeration variable
    //color c;   //enumeration variable with typedef
    enum name nm;  //enumeration variable
    //int rs1,rs2;
    //c=red+green+blue+orange;
    nm=aaa+bbb+ccc+eee;
    printf("Value of nm = %d\n",nm);
    //printf("Value of rs1 = %d\nValue of rs2 = %d\n",c,nm);
    //printf("%d",orange);
}*/

// enum with typedef function
/*#include<stdio.h>
typedef enum color
{
    red=4,
    green=8,
    blue=10,
    orange,
    purple
}colour;
//enum color {red=4,green =8,blue=5};
//enum name{aaa,bbb,ccc,ddd,eee};
void main()
{
    //enum color c; //enumeration variable
    colour cr;   //enumeration variable with typedef
    //enum name nm;  //enumeration variable
    //int rs1,rs2;
    cr=red+green+blue+orange;
    //nm=aaa+bbb;
    printf("Value of cr = %d\n",cr);
    printf("Value of purple : %d\n",purple);
}*/

//typedef keyword
/*#include <stdio.h>
void main()
{
    typedef int integer;
    typedef float real;
    integer r;
    real ar,pr;
    printf("Enter Any Number : ");
    scanf("%d",&r);
    pr=2*3.141*r;
    ar=3.141*r*r;
    printf("Area = %.2f\nPerimeter = %.2f\n",ar,pr);
}*/

/*#include<stdio.h>
typedef struct greatest
{
    int gt,a,b,c;
}Number;
void main()
{
    Number g;
    printf("Enter Three Number's :\n");
    scanf("%d%d%d",&g.a,&g.b,&g.c);
    g.gt=(g.a>g.b && g.a>g.c?g.a:(g.b>g.c?g.b:g.c));
    printf("Greatest Number = %d\n",g.gt);
}*/

