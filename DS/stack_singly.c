//14-08-2023
// stack through singly linked list
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *top=NULL;
void push()
{
    node *p;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("\nMemory Full");
        return;
    }
    int val;
    printf("\nEnter data :- ");
    scanf("%d",&val);
    p->data=val;
    p->next=top;
    top=p;
}

void pop()
{
    node *t;
    if(top==NULL)
    {
        printf("\nStack is empty.");
        return;
    }
    t=top;
    top=top->next;
    free(t);
}

void peep()
{
    int i;
    node *t;
    if(top==NULL)
    {
        printf("\nSatck is Empty.");
        return;
    }
    // for(t=top;t!=NULL;t=t->next)
    // {
    //     printf("%d\t",t->data);
    // }
    printf("\nPosition:\tData:\tAddress:\tNext Address\n");
    for(i=1,t=top;t!=NULL;i++,t=t->next)
    {
        printf("%d\t\t%d\t%d\t\t%d\n",i,t->data,t,t->next);
    }
}
int main()
{
    char ch;
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
    return 0;
}
