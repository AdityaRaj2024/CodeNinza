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
    printf("Enter Data : ");
    scanf("%d",&head->data);
    head->next=head;
    p=head;
    printf("more(y/n):");
    ch=getche();
    while (ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&q->data);
        q->next=head;
        p->next=q;
        p=q;
        printf("more(y/n):");
        ch=getche();
    }

    return head;
}
void show(node * h)
{
    int i;
    node *p;
    p=h;
    printf("\nS.No.\tElements\tSelf\t\tNext");
    for(i=1;p->next!=h;p=p->next,i++)
    {
        printf("\n%d\t%d\t\t%d\t%d",i,p->data,p,p->next);
    }
    printf("\n%d\t%d\t\t%d\t%d",i,p->data,p,p->next);
}
node *ins_first(node *h)
{
    node *n,*z;
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for first node :- ");
    scanf("%d",&n->data);
    n->next=h;
    // z=h;
    for(z=h;z->next!=h;z=z->next);
    z->next=n;
    return n;
}
node *ins_last(node *h)
{
    node *n,*z;
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for last node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    for(z=h;z->next!=h;z=z->next);
    z->next=n;
    n->next=h;
    return h;
}
node *ins_pos_aft(node *h)
{
    node *n,*z;
    int pos,i;
    printf("\nEnter Postion to insert after :- ");
    scanf("%d",&pos);
    for(i=1,z=h;z->next!=h;z=z->next,i++);
    if(pos<=0 || pos>i)
    {
        printf("Invalid Position");
        return h;
    }
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for specified node position :- ");
    scanf("%d",&n->data);
    for(z=h,i=1;i<pos;z=z->next,i++);
    n->next=z->next;
    z->next=n;
    return h;
}
node *ins_pos_bef(node *h)
{
    node *n,*z;
    int pos,i;
    printf("\nEnter Postion to insert at :- ");
    scanf("%d",&pos);
    for(i=1,z=h;z->next!=h;z=z->next,i++);
    if(pos<=0 || pos>i+1)
    {
        printf("Invalid Position");
        return h;
    }
    n=(node*)malloc(sizeof(node));
    printf("\nEnter Data for specified node position :- ");
    scanf("%d",&n->data);
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
    head=ins_first(head);
    show(head);
    head=ins_last(head);
    show(head);
    head=ins_pos_aft(head);
    show(head);
    head=ins_pos_bef(head);
    show(head);
    return 0;
}
