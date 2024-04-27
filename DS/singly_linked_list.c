// 19/07/2023
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
int main()
{
    node *head;
    head=create();
    show(head);
    return 0;
}

// 19/07/2023
// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>

// typedef struct node
// {
//     int data;
//     struct node *next;
// }node;
// node *create()
// {
//     node *head,*p,*q;
//     char ch[2];
//     head=(node*)malloc(sizeof(node));
//     printf("\nEnter Data : ");
//     scanf("%d",&head->data);
//     head->next=NULL;
//     p=head;
//     printf("\nmore(y/n):");
//     scanf("%s",&ch);
//     // ch=getche();
//     while (ch=="y"||ch=="Y")
//     {
//         q=(node*)malloc(sizeof(node));
//         printf("\nEnter data : ");
//         scanf("%d",&q->data);
//         q->next=NULL;
//         p->next=q;
//         p=q;
//         printf("\nmore(y/n):");
//         scanf("%s",&ch);
//         // ch=getche();
//     }

//     return head;
// }
// void show(node * head)
// {
    
//     while(head!=NULL)
//     {
//         printf("\nElements : %d ",head->data);
//         printf("address %d",head);
//         head=head->next;
//     }
// }

// int main()
// {
//     node *head;
//     head=create();
//     show(head);
//     return 0;
// }
