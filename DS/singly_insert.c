// 21/07/2023
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

//21-07-2023
//insert at first node
node *ins_first(node *h)
{
    node *n;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Data For first Node :- ");
    scanf("%d",&n->data);
    n->next=h;
    h=n;
    printf("After inserting at first position");
    return h;
}
//insert at last node
node *ins_last(node *h)
{
    node *n,*z;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Data For last Node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    z=h;
    while (z->next != NULL)
    {
        z = z->next;
    }
    z->next = n;
    printf("After inserting at last position");
    return h;
}

//insert at position berfore
node *ins_posb(node *h)
{
    node *n,*z;
    int c=0,pos;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Position :- ");
    scanf("%d",&pos);
    printf("Enter Data for %d position Node :- ",pos);
    scanf("%d",&n->data);
    n->next=NULL;
    z=h;
    while(z!=NULL)
    {
        c++;
        if(c==pos-1)
        {
            n->next=z->next;
            z->next=n;
            break;
        }
        z=z->next;
    }
    printf("After inserting at %d position",pos);
    return h;
}

//insert at position after
node *ins_posa(node *h)
{
    node *n,*z;
    int c=0,pos;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Position :- ");
    scanf("%d",&pos);
    printf("Enter Data for %d position Node :- ",pos+1);
    scanf("%d",&n->data);
    n->next=NULL;
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
    printf("After inserting at %d position",pos+1);
    return h;
}
node *delete(node *head)
{
    node *p,*q,*t;
    for(p=head;p->next!=NULL;p=p->next)
    {
        for(q=p;q!=NULL;q=q->next)
        {
            if(p->data == q->next->data)
            {
                t=q->next;
                q->next=t->next;
                free(t);
            }
        }
    }
    
    printf("\nAfter Deleting Duplicate Elements :- ");
    return head;
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
    head=ins_posb(head);
    show(head);
    head=ins_posa(head);
    // head = delete(head);
    show(head);
    return 0;
}