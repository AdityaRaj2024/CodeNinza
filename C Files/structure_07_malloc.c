// #include<stdio.h>
// #include<stdlib.h>
// struct student
// {
//     int rollno;
//     char nm[20];
// };
// //struct student s[5];
// struct student *s;
// s=(struct student *)malloc(sizeof(struct student)*5);
/*wap in c to create  a structure as named student to input rollno. & name of more students after that print all records.
implement malloc function.*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollno;
    char name[20];
};
void main()
{
    int n,i;
    struct student *s;
    printf("Enter Number Of records = ");
    scanf("%d",&n);
    s=(struct student *)malloc(sizeof(struct student)* n);
    for(i=0;i<n;i++)
    {
        printf("Enter Rollno. & Name for students %d\n",i+1);
        scanf("%d%s",&(s+i)->rollno,(s+i)->name);
    }
    printf("Roll no.\tname\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\n",(s+i)->rollno,(s+i)->name);
    }
}