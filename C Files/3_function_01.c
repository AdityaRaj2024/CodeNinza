//Searching Function
/*#include<stdio.h>
void searching(int a[],int size,int svalue)
{
    int i,flag=0;
    for(i=0;i<size;i++)
    {
        if(a[i]==svalue)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d is found.",svalue);
    else
    printf("%d Is  Not found.",svalue);
}

void main()
{
    int size,svalue,i;
    //int a[100];
    printf("Enter Size Of Array = ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d Number's =\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Searching Value :");
    scanf("%d",&svalue);
    searching(a,size,svalue);
}*/

//find maximum digits
/*#include<stdio.h>
void find_max_digit(int n)
{
    int d,max=0;
    while (n>0)
    {
        d=n%10;
        if(d>max)
            max=d;
        n=n/10;
    }
    printf("Greatest Digit = %d",max);
}
void main()
{
    //find_max_digit(45987);
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    find_max_digit(n);
}*/

//create marksheet
/*#include<stdio.h>
#include<string.h>
int roll_no,i;
float marks[5],tm,pm;
char subject[5][50],course[40],name[30],remark[20];
void input()
{
    printf("Enter Roll No. , Name And Course =");
    scanf("%d%s%s",&roll_no,name,course);
    for(i=0;i<5;i++)
    {
        printf("Enter Subject Name And Marks =");
        scanf("%s%.2f",subject[i],&marks[i]);
    }
}
float find_total()
{
    tm=0;
    for(i=0;i<5;i++)
    {
        tm=tm+marks[i];
    }
    return(tm);
}
float find_percentage()
{
    pm=find_total()/5;
    return(pm);
}
void get_remark()
{
    if(pm>=90)
        strcpy(remark,"Excellent");
    else if(pm>=75)
        strcpy(remark,"Very Good");
    else if(pm>=60)
        strcpy(remark,"Good");
    else if(pm>=45)
        strcpy(remark,"Average");
    else
        strcpy(remark,"Fail");
}
void genrate_marksheet()
{
    printf("Marksheet-2022\n");
    printf("================\n");
    printf("Roll No. =%d\nName =%s\nCourse =%s\n",roll_no,name,course);
    printf("Subject Name \t Marks \n");
    for(i=0;i<5;i++)
    {
        printf("%s\t%.2f\n",subject[i],marks[i]);
    }
    printf("Total marks = %.2f \nPercentage marks =%.2f\n Remark =%s\n",tm,pm,remark);
    printf("Thanks");
}

void main()
{
    input();
    find_percentage();
    get_remark();
    genrate_marksheet();
}*/
