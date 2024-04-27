// 23-08-2023
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *front=NULL,*rear=NULL;
void insertq()
{
    int val;
    printf("\nEnter data :- ");
    scanf("%d",&val);
    node *z;
    z=(node*)malloc(sizeof(node));
    z->data=val;
    z->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=z;
    }
    else
    {
        rear->next=z;
        rear=z;
    }
}

// void insertq(int val)
// {
//     node *z;
//     z=(node*)malloc(sizeof(node));
//     z->data=val;
//     z->next=NULL;
//     if(front==NULL && rear==NULL)
//     {
//         front=rear=z;
//     }
//     else
//     {
//         rear->next=z;
//         rear=z;
//     }
// }

void deleteq()
{
    node *t;
    if(front==NULL && rear==NULL)
    {
        printf("\nQueue is empty.");
        return;
    }
    else if(front==rear)
    {
        t=front;
        front=rear=NULL;
        free(t);
    }
    else
    {
        t=front;
        front=front->next;
        free(t);
    }
}

void showq()
{
    int i;
    node *z;
    if(front==NULL && rear==NULL)
    {
        printf("\nQueue is Empty.");
        return;
    }
    printf("\nPosition:\tData:\tAddress:\t\tNext Address\n");
    for(i=1,z=front;z!=NULL;i++,z=z->next)
    {
        printf("%d\t\t%d\t%d\t\t%d\n",i,z->data,z,z->next);
    }
}

int main()
{
    char ch;
    do
    {
        printf("\nEnter\nI:-Insert\nD:-Delete\nS:-Show\nQ:-Quit");
        printf("\nEnter choice :- ");
        ch=getche();
        switch(ch)
        {
            case 'I':
            case 'i':
                insertq();
                break;
            case 'D':
            case 'd':
                deleteq();
                // break;
            case 'S':
            case 's':
                showq();
                break;
            case 'Q':
            case 'q':
                break;
            default:
                printf("\nInvalid choice :- ");
        }
    }while(ch=='I'||ch=='i'||ch=='D'||ch=='d'||ch=='S'||ch=='s');
    return 0;
}