//26-07-2023
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
        printf("\taddress %d",head->next);
        head=head->next;
    }
}

//deleting last node
node *delete(node *h)
{
    node *z,*t;
    z=h;
    while (z->next->next!=NULL) //second last node
    {
        z=z->next;
    }
    t=z->next;
    z->next=NULL;
    free(t);
    return h;
}

int main()
{
    node *head;
    head=create();
    show(head);
    printf("\nAfter Deletion of Last Node :-");
    head=delete(head);
    show(head);
    return 0;
}