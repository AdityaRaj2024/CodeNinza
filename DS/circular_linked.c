// 02-08-2023
// circular linked list
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
    // while(p->next!=h)
    // {
    //     printf("\nElements : %d ",p->data);
    //     printf("address %d",p);
    //     p=p->next;
    // }
    // printf("\nElements : %d ",p->data);
    // printf("address %d",p);
}

int main()
{
    node *head;
    head=create();
    show(head);
    return 0;
}
