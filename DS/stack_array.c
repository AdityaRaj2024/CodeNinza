//09-08-2023
//stack using array
#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>
#define s 5
int stack[s],top=-1;
// void push(int val)
// {
//     if(top==s)
//     {
//         printf("Stack is full.");
//         return;
//     }
//     top++;
//     stack[top]=val;
// }
void push()
{
    int val;
    if(top==s-1)
    {
        printf("\nStack is full.");
        return;
    }
    top++;
    printf("\nEnter data :- ");
    scanf("%d",&stack[top]);
    // top++;
    // stack[top]=val;
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    top--;
}
void peep()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nData\t");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
int main()
{
    char ch;
    // int n;
    do
    {
        printf("\nEnter\nP:-Push\nD:-Delete\nS:-Peep\nQ:-Quit");
        printf("\nEnter choice :- ");
        ch=getche();
        switch(ch)
        {
            case 'P':
            case 'p':
                push();
                break;
            case 'D':
            case 'd':
                pop();
                // peep();
                // break;
            case 'S':
            case 's':
                peep();
                break;
            case 'Q':
            case 'q':
                break;
            default:
                printf("\nInvalid choice :- ");
        }
        // peep();
    }while(ch=='P'||ch=='p'||ch=='D'||ch=='d'||ch=='S'||ch=='s');
    // do{
    //     // printf("\nEnter Data :  ");
    //     // scanf("%d",&n);
    //     push();
    //     printf("More Data?  ");
    //     ch=getche();
    // }while(ch=='y' || ch=='Y');
    // peep();pop();
    // peep();pop();
    // peep();pop();
    // peep();
}