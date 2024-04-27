//26-07-2023
#include<stdio.h>
#include<malloc.h>
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
        printf("\nmore(y):");
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

node *concat(node *h)
{
    node *n,*z;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Data For New Node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    z=h;
    while (z->next != NULL)
    {
        z = z->next;
    }
    z->next = n;
    printf("After Concatnating to the list");
    return h;
}

int main()
{
    node *head;
    head=create();
    show(head);
    head=concat(head);
    show(head);
    return 0;
}