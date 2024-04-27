// 04-08-2023
// circular linked list - insert at last position
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
    head->next=head;
    p=head;
    printf("\nmore(y/n):");
    ch=getche();
    while (ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&q->data);
        q->next=head;
        p->next=q;
        p=q;
        printf("\nmore(y/n):");
        ch=getche();
    }

    return head;
}
void show(node * h)
{
    node *p;
    p=h;
    while(p->next!=h)
    {
        printf("\nElements : %d ",p->data);
        printf("\taddress %d",p);
        printf("\tNext address %d",p->next);
        p=p->next;
    }
    printf("\nElements : %d ",p->data);
    printf("\taddress %d",p);
    printf("\tNext address %d",p->next);
}
node *ins_last(node *h)
{
    node *n,*z;
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for new node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    for(z=h;z->next!=h;z=z->next);
    z->next=n;
    n->next=h;
    return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=ins_last(head);
    show(head);
    return 0;
}
