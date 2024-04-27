
// wap to create a file as named myaccount to input account holders name and account type and balance
//  Any customer can debit and credit account multiple times according to requirement after that generate
// mini statement

#include <stdio.h>
#include <process.h>
struct Account
{
    char ac_no[20], ac_type[20];
    float balance;
};
void ac_registration();
void view_registration();
void debit();
void getMinistmt();
void modifyAccount();
void deleteAccount();

struct Account ac; // global structue variable

void main()
{
    int choice;
    do
    {
    printf("Enter choices \n Press 1 for registration \n Press 2 for view account \nPress 3 for debit \n Press 4 for credit \n Press 5 for mini-statement \nPress 6 for update account \n Press 7 for delete Account \n Press 8 for exit\n");
    scanf("%d",&choice);

     switch(choice)
     {
        case 1:
            ac_registration();
            break;
        case 2:
            view_registration();
            break;
        case 3:
            debit();
            break;
        case 4:
            credit();
            break;
        case 5:
            getMinistmt();
            break;
        case 6:
            modifyAccount();
            break;
        case 7:
            deleteAccount();
            break;
        case 8:
            exit(0);
        default:
        printf("Invalid choice\n");



     }
    }
}
