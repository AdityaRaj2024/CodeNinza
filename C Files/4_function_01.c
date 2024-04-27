/*#include<stdio.h>
#include<string.h>
int empid;
char name[40],post[40];
float bs,hra,ta,da,pf,ma,gs,ns;
int input(int id,char nm[],char job[],float basic)
{
    empid=id;
    strcpy(name,nm);
    strcpy(post,job);
    bs=basic;
    printf("Enter Employee ID,Name ,Post & Basic_salary =\n");
    scanf("%d%s%s%f",&empid,name,post,&bs);
}
float find_gross()
{
    if(bs>=40000)
    {
        hra=bs*25/100;
        da=bs*25/100;
        ta=bs*30/100;
        ma=bs*20/100;
        pf=bs*10/100;
    }
    else if(bs>=25000)
    {
        hra=bs*20/100;
        da=bs*22.5/100;
        ta=bs*25/100;
        ma=bs*17.5/100;
        pf=bs*10/100;
    }
    else if(bs>=12000)
    {
        hra=bs*15/100;
        da=bs*20/100;
        ta=bs*20/100;
        ma=bs*14/100;
        pf=bs*10/100;
    }
    else
    {
        hra=bs*10/100;
        da=bs*15/100;
        ta=bs*15/100;
        ma=bs*12/100;
        pf=bs*10/100; 
    }
    gs=bs+hra+da+ta+ma+pf;
    return(gs);
}
float find_net_salary()
{
    ns=find_gross()-pf;
    return(ns);
}
void genrate_salary_slip()
{
    printf("Salary Slip Of This Month\n");
    printf("================================\n");
    printf("Employee id=%d\nName =%s\nPost = %s\nBasic Salary =%.2f\nHRA = %.2f\nDA = %.2f\nTA = %.2f\nPF =%.2f\nma=%.2f\nGross Salary =%.2f\nNet Salary =%.2f",
	empid,name,post,bs,hra,da,ta,pf,ma,gs,find_net_salary());
}

void main()
{
    //input(10,"Aakash","Manager",35000.25f);
    //genrate_salary_slip();
    int empid;
    char name[40],post[40];
    float bs;
    input(empid,name,post,bs);
    //  printf("Enter Employee ID ,Name ,Post & Basic_salary =\n");
    // scanf("%s",&empid,name,post,&bs);
    genrate_salary_slip();
}*/