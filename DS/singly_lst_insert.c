// 21/07/2023
//Inserting node at last position
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
    printf("\nElements\tNext_Address");
    while(head!=NULL)
    {
        printf("\n%d\t\t%d",head->data,head->next);
        // printf("\nElements : %d ",head->data);
        // printf("address %d",head->next);
        head=head->next;
    }
}
//21-07-2023
//insert at last node
node *ins_last(node *h)
{
    node *n,*z;
    n=(node *)malloc(sizeof(node));
    printf("\nEnter Data For New Node :- ");
    scanf("%d",&n->data);
    n->next=NULL;
    // n->next=h;
    z=h;
    while (z->next != NULL)
    {
        z = z->next;
    }
    z->next = n;
    return h;
    
    
}
int main()
{
    node *head;
    head=create();
    // show(head);
    // head=ins_first(head);
    show(head);
    head=ins_last(head);
    show(head);
    return 0;
}