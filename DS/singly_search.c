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

void search(node *head)
{
    node *p;
    int s,c=0,flag=0;
    p=head;
    if(p==NULL)
    {
        printf("Empty List");
    }
    else
    {
        printf("\nEnter Element you want to search?  ");
        scanf("%d",&s);
        while(p!=NULL)
        {
            if(p->data==s)
            {
                printf("Element %d is found at location %d.\n",s,c+1);
                flag=0;
                break;
            }
            else
            {
                flag++;
            }
            c++;
            p=p->next;
        }
        if(flag>0)  
        {  
            printf("Element not found");  
        }  
    }
}
void main()
{
    node *head;
    head=create();
    show(head);
    search(head);
    // show(head);
}