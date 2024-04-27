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
    printf("\nS.No.\tElements\tNext_Address");
    for(int i=1;head!=NULL;i++)
    {
        printf("\n%d\t%d\t\t%d",i,head->data,head->next);
        head=head->next;
    }
}

//deleting first node
node *delete_fst(node *h)
{
    node *z;
    z=h;
    h=h->next;
    free(z);
    printf("\nAfter Deletion of First Node :-");
    return h;
}

//deleting last node
node *delete_lst(node *h)
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
    printf("\nAfter Deletion of Last Node :-");
    return h;
}

//deleting any mid node
node *delete_pos(node *h)
{
    node *z,*p,*ct;
    int c=0, pos,i=0;
    printf("\nEnter Position :- ");
    scanf("%d",&pos);
    // z=h;
    ct=z=h;
    for(i=0;ct!=NULL;i++,ct=ct->next);
    if(pos>i)
    {
        printf("Invalid Position");
    }
    else
    {
        printf("After Deletion of Any Mid Node :-");
        while(z!=NULL)
        {
            c++;
            if(c==pos-1)
            {
                p=z->next;
                z->next=p->next;
                free(p);
                break;
            }
            z=z->next;
        }
        show(h);
    }
}

int main()
{
    node *head;
    head=create();
    show(head);
    head=delete_fst(head);
    show(head);
    head=delete_lst(head);
    show(head);
    head=delete_pos(head);
    // show(head);
    return 0;
}