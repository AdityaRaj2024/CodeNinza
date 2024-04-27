#include<stdio.h>
struct student
{
    int roll_no;
    char name[20],course[20];
    float fee;
};
void main()
{
    int n,i;
    printf("Enter No. Of Students = ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Roll No.,Name,Course & Fee for Student %d\n",i+1);
        scanf("%d%s%s%f",&s[i].roll_no,s[i].name,s[i].course,&s[i].fee);
    }
    printf("Roll No.\tName\tCourse\tFee\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t%s\t%.2f\n",s[i].roll_no,s[i].name,s[i].course,s[i].fee);
    }
}