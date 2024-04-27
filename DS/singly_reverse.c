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
    head->next=NULL;
    p=head;
    printf("more(y/n):");
    ch=getche();
    while (ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&q->data);
        q->next=NULL;
        p->next=q;
        p=q;
        printf("more(y/n):");
        ch=getche();
    }

    return head;
}
void show(node * head)
{
    printf("\nS.No.\tElements\tself_Address\t\tNext_Address");
    for(int i=1;head!=NULL;i++)
    {
        printf("\n%d\t%d\t\t%d\t\t%d",i,head->data,head,head->next);
        head=head->next;
    }
}
void reverse(node *head)
{
    node *p,*q;
    if(head!=NULL)
    {
        p=head;
        q=head->next;
        head=head->next;
        p->next=NULL;//Making first node as last node
        while(head!=NULL)
        {
            head=head->next;
            q->next=p;
            p=q;
            q=head;
        }
        head=p;//Making last node as head
    }
    printf("\nIn Reverse Order :-");
    printf("\nS.No.\tElements\tself_Address\t\tNext_Address");
    for(int i=1;head!=NULL;i++)
    {
        printf("\n%d\t%d\t\t%d\t\t%d",i,head->data,head,head->next);
        head=head->next;
    }
}
int main()
{
    node *head;
    head=create();
    show(head);
    reverse(head);
    return 0;
}