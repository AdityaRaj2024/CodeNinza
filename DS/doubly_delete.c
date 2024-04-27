// 02-08-2023
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
}node;
node*create()
{
    node *head,*p,*q;
    char ch;
    head=(node*)malloc(sizeof(node));
    printf("Enter Data : ");
    scanf("%d",&head->data);
    head->next=head->prev=NULL;
    // head->next=NULL;
    // head->prev=NULL;
    p=head;
    printf("more(y/Y):");
    ch=getche();
    while (ch=='y'||ch=='Y')
    {
        q=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&q->data);
        q->next=NULL;
        p->next=q;
        q->prev=p;
        p=q;
        printf("more(y/n):");
        ch=getche();
    }

    return head;
}
void show(node * head)
{
    int i;
    printf("\nFrom :- First to Last:-");
    printf("\nS.No.\tElements\tSelf\t\tPrevious\t\tNext");
	for(i=1;head->next!=NULL;i++)
    {
        printf("\n%d\t%d\t\t%d\t%d\t\t%d",i,head->data,head,head->prev,head->next);
        head=head->next;
    }
    printf("\n%d\t%d\t\t%d\t%d\t\t%d",i,head->data,head,head->prev,head->next);
    printf("\nFrom Last to first :-");
    printf("\nS.No.\tElements\tSelf\t\tPrevious\t\tNext");
	for(i=i
    ;head!=NULL;i--)
	{
		printf("\n%d\t%d\t\t%d\t%d\t\t%d",i,head->data,head,head->prev,head->next);
		head=head->prev;
	}
}
node *delete_first(node *head)
{
    node *t;
    t=head;
    head=head->next;
    head->prev=NULL;
    free (t);
    printf("\nAfter deleting first element");
    return head;
}
node *delete_last(node *head)
{
    node *t,*z;
    z=head;
    while(z->next->next!=NULL)
    {
        z=z->next;
    }
    t=z->next;
    z->next=NULL;
    free(t);
    printf("\nAfter deleting last element");
    return head;
}
node *delete_mid(node *h)
{
    node *z,*p,*d;
    int pos,i=0,c=0;
    printf("\nEnter Position :- ");
    scanf("%d",&pos);
    for(d=h,c=1;d->next!=NULL;d=d->next,c++);
	if(pos<=0 || pos>c)
	{
		printf("\nInvalid Position\n");
		return h;
	}
    else if(pos==1)
    {
        delete_first(h);
    }
    else if(pos==c)
    {
        delete_last(h);
    }
    else
    {
        printf("After Deletion of Any Mid Node :-");
        z=h;
        while(z!=NULL)
        {
            i++;
            if(i==pos-1)
            {
                p=z->next;
                z->next=p->next;
                p->next->prev=z;
                free(p);
                break;
            }
            z=z->next;
        }
        return h;
    }
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=delete_first(head);
    show(head);
    head=delete_last(head);
    show(head);
    head=delete_mid(head);
    show(head);
    return 0;
}