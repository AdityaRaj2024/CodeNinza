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
    
    while(head!=NULL)
    {
        printf("\nElements : %d ",head->data);
        printf("address %d",head->next);
        head=head->next;
    }
}

//deleting any mid node
node *delete(node *h)
{
    node *z,*p;
    int c=0, pos;
    printf("\nEnter Position :- ");
    scanf("%d",&pos);
    printf("\nAfter Deletion of Any Mid Node :-");
    z=h;
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
    return h;
}

int main()
{
    node *head;
    head=create();
    show(head);
    // printf("\nAfter Deletion of Any Mid Node :-");
    head=delete(head);
    show(head);
    return 0;
}