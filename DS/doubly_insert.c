// 31-07-2023
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
        printf("\n%d\t%d\t\t%d\t\t%d\t\t%d",i,head->data,head,head->prev,head->next);
        head=head->next;
    }
    printf("\n%d\t%d\t\t%d\t\t%d\t\t%d",i,head->data,head,head->prev,head->next);
    printf("\nFrom Last to first :-");
    printf("\nS.No.\tElements\tSelf\t\tPrevious\t\tNext");
	for(i=i;head!=NULL;i--)
	{
		printf("\n%d\t%d\t\t%d\t\t%d\t\t%d",i,head->data,head,head->prev,head->next);
		head=head->prev;
	}
}
//insert_first() function will insert a node in Linked-list at first position and return address of first node;
node *insert_first(node *h)
{
	node *n,*p;
	n=(node *)malloc(sizeof(node));
	printf("\nEnter data that you want to insert at first:- ");
	scanf("%d",&n->data);
	n->next=h;
	n->prev=NULL;
	h->prev=n;
	return n;	
}

//insert_last() function will insert a node in Linked-list at last position and return address of first node;
node *insert_last(node *h)
{
	node *n,*p;
	n=(node *)malloc(sizeof(node));
	printf("\nEnter data that you want to insert at Last:- ");
	scanf("%d",&n->data);
	n->next=NULL;
	n->prev=NULL;
	for(p=h;p->next!=NULL;p=p->next);
	p->next=n;
	n->prev=p;
	return h;
}

//insert_before_position() function will insert a node in Linked-list at specified position and return address of first node;
node *insert_before_position(node *h)
{
	int pos,i;
	printf("\nEnter position where you want to store the data:- ");
	scanf("%d",&pos);
	node *n,*p;
	for(p=h,i=1;p->next!=NULL;p=p->next,i++);
	if(pos<=0 || pos>1+i)
	{
		printf("\nInvalid Position\n");
		return h;
	}
	n=(node *)malloc(sizeof(node));
	printf("Enter data that you want to store at %d position:- ",pos);
	scanf("%d",&n->data);
	n->next=NULL;
	n->prev=NULL;
	if(pos==1)
	{
		n->next=h;
		h->prev=n;
		return n;
	}
	if(pos==i+1)
	{
		p->next=n;
		n->prev=p;
		return h;
	}
	for(p=h,i=1;i<=pos-2;p=p->next,i++);
	n->next=p->next;
	p->next->prev=n;
	p->next=n;
	n->prev=p;
	return h;
}

//insert_after_position() function will insert a node in Linked-list after specified position and return address of first node;
node *insert_after_position(node *h)
{
	int pos,i;
	printf("\nEnter position after you want to store the data:- ");
	scanf("%d",&pos);
	node *p,*n;
	for(p=h,i=1;p->next!=NULL;p=p->next,i++);
	if(pos<=0 || pos>i)
	{
		printf("\nInvalid Position\n");
		return h;
	}
	n = (node *)malloc(sizeof(node));
	printf("Enter data that you want to enter after %d position:- ",pos+1);
	scanf("%d",&n->data);
	n->next=NULL;
	n->prev=NULL;
	if(pos==i)
	{
		p->next=n;
		n->prev=p;
		return h;
	}
	for(p=h,i=1;i<pos;p=p->next,i++);
	n->next=p->next;
	n->prev=p;
	p->next->prev=n;
	p->next=n;
	return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=insert_first(head);
    show(head);
    head=insert_last(head);
    show(head);
    head=insert_before_position(head);
    show(head);
    head=insert_after_position(head);
    show(head);
    return 0;
}