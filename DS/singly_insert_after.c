//24-07-2023
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node *create()
{
    node *head,*p,*q;
    char ch;
    head=(node*)malloc(sizeof(node));
    printf("\nEnter Data : ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    printf("\nmore(y/n):");
    ch=getche();
    while (ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&q->data);
        q->next=NULL;
        p->next=q;
        p=q;
        printf("\nmore(y/n):");
        ch=getche();
    }

    return head;
}
void show(node * head)
{
    
    while(head!=NULL)
    {
        printf("\nElements : %d ",head->data);
        printf("address %d",head->next);
        head=head->next;
    }
}
//insert at position after
node *ins_posa(node *h)
{
    node *n,*z;
    int c=0,pos;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Data for New Node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    printf("Enter Position :- ");
    scanf("%d",&pos);
    z=h;
    while(z!=NULL)
    {
        c++;
        if(c==pos)
        {
            n->next=z->next;
            z->next=n;
            break;
        }
        z=z->next;
    }
    return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=ins_posa(head);
    show(head);
    return 0;
}