// 04-08-2023
// circular linked list - insert at first position
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
    printf("\nElements\tSelf_Address\tNext_Address");
    while(p->next!=h)
    {
        printf("\n%d\t%d\t\t%d",p->data,p,p->next);
        // printf("\nElements : %d ",p->data);
        // printf("\taddress %d",p);
        // printf("\tNext address %d",p->next);
        p=p->next;
    }
    printf("\n%d\t%d\t\t%d",p->data,p,p->next);
    // printf("\nElements : %d ",p->data);
    // printf("\taddress %d",p);
    // printf("\tNext address %d",p->next);
}
node *ins_pos_bef(node *h)
{
    node *n,*z;
    int pos,i;
    printf("\nEnter Postion to insert :- ");
    scanf("%d",&pos);
    for(i=1,z=h;z->next!=h;z=z->next,i++);
    if(i+1<pos)
    {
        printf("Invalid Position");
        return h;
    }
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for specified node position :- ");
    scanf("%d",&n->data);
    // n->next=h;
    // z=h;
    for(z=h,i=1;i<pos-1;z=z->next,i++);
    n->next=z->next;
    z->next=n;
    return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=ins_pos_bef(head);
    show(head);
    return 0;
}
