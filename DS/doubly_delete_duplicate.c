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
	for(i=i;head!=NULL;i--)
	{
		printf("\n%d\t%d\t\t%d\t%d\t\t%d",i,head->data,head,head->prev,head->next);
		head=head->prev;
	}
}
//delete_duplicate() function will delete the duplicate value's node and return address of first node;
node *delete_duplicate(node *h)
{
	node *p,*q,*z;
	for(p=h;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data == q->data)
			{
				z=q;
				q=q->prev;
				q->next = z->next;
				z->next->prev = z->prev;
				free(z);
			}
		}
	}
	return h;
}

int main()
{
    node *head;
    head=create();
    show(head);
    head=delete_duplicate(head);
    show(head);
    return 0;
}