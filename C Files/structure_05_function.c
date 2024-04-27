/*
    WAP in C to create a structure as named account to input account number ,account holder's name and balance using function
    A customer can credit and debit amount multiple times according to requirement using separate function after that generate mini statement.
*/
#include<stdio.h>
#include<stdlib.h>
struct account 
{
    char ac_no[20],ac_type[20],ac_nm[20];
    float balance;
};
void getInput();
void debit();
void credit();
void getministmt();
struct account ac; //global variable
void main()
{
    int choice;
    getInput();
    do
    {
        printf("Enter Choice\nPress 1 for Debit\nPress 2 for Credit\nPress 3 for get mini statement\nPress 4 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            debit();
            break;
            case 2:
            credit();
            break;
            case 3:
            getministmt();
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid Choice\n");
        }
    }while(choice>=1 && choice<=4);
}
void getInput()
{
    printf("Enter a/c no.,a/c holder's name , a/c type and balance :\n");
    scanf("%s%s%s%f",ac.ac_no,ac.ac_nm,ac.ac_type,&ac.balance);
}
void debit()
{
    int amt;
    printf("How much amount to be debited? = ");
    scanf("%d",&amt);
    if(amt<=ac.balance)
        ac.balance=ac.balance-amt;
    else
        printf("Insufficient Fund\n");
}
void credit()
{
    int amt;
    printf("How much amount to be credited? = ");
    scanf("%d",&amt);
    ac.balance=ac.balance+amt;
}
void getministmt()
{
    printf("Account Number = %s\nAccount Holder's Name = %s\nAccount Type = %s\nCurrent Balance = %.2f\n",ac.ac_no,ac.ac_nm,ac.ac_type,ac.balance);
}