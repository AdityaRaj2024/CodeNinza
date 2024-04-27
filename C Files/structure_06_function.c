/*#include<stdio.h>
struct Student
{
    int rollno;
    char nm[20],cs[20];
    float fee;
};
struct Student getInput()
{
    struct Student s;
    printf("Enter roll_no,Name,Course & Fee\n");
    scanf("%d%s%s%f",&s.rollno,s.nm,s.cs,&s.fee);
    return s;
}
void showRecord(struct Student s)
{
    printf("Roll No. = %d\nName = %s\nCourse = %s\nFee = %.2f\n",s.rollno,s.nm,s.cs,s.fee);
}
void main()
{
    struct Student s;
    s=getInput();
    showRecord(s);
}*/

#include<Stdio.h>
struct input
{
    int gt,a,b,c;
};
struct input greatest()
{
    struct input i;
    printf("Enter Three Number's :\n");
    scanf("%d%d%d",&i.a,&i.b,&i.c);
    //i.gt=(i.a>i.b && i.a>i.c ?i.a :(i.b>i.c ? i.b : i.c));
    return i;
}
void findgreatest(struct input i)
{
    i.gt=(i.a>i.b && i.a>i.c ?i.a :(i.b>i.c ? i.b : i.c));
    printf("Greatest Number = %d",i.gt);
}
void main()
{
    struct input i;
    i=greatest();
    findgreatest(i);
}