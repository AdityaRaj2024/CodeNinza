// 07-08-2023
// circular linked list-Delete at last position
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
    printf("\nElements\tSelf_Address\t\tNext_Address");
    while(p->next!=h)
    {
        printf("\n%d\t\t%d\t\t\t%d",p->data,p,p->next);
        p=p->next;
    }
    printf("\n%d\t\t%d\t\t\t%d",p->data,p,p->next);
}
node *del_lst(node *h)
{
    node *z,*t;
    for(z=h;z->next->next!=h;z=z->next);
    t=z->next;
    z->next=h;
    free(t);
    return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    printf("\nAfter Deletion of last element :- ");
    head=del_lst(head);
    show(head);
    return 0;
}
