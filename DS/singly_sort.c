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
    printf("Enter Data :- ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    printf("more(y/n)");
    ch=getche();
    while(ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter Data :- ");
        scanf("%d",&q->data);
        q->next=NULL;
        p->next=q;
        p=q;
        printf("more(y/n)");
        ch=getche();
    }
    return head;
}
void show(node *head)
{
    printf("\nS.No.\tElements\tNext_Address");
    for(int i=1;head!=NULL;i++)
    {
        printf("\n%d\t%d\t\t%d",i,head->data,head->next);
        head=head->next;
    }
}
void sort(node *head)
{
    int i;
    node *p,*q;
    p=q=head;
    for(p=head;p->next!=NULL;p=p->next)
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->data>q->data)
            {
                i=p->data;
                p->data=q->data;
                q->data=i;
            }
        }
    }
    printf("\nIn Ascending Order :-");
    show(head);
}
void main()
{
    node *head;
    head=create();
    show(head);
    sort(head);
}