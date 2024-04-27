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
        printf("\n%d\t%d\t\t%d\t\t%d",i,p->data,p,p->next);
    }
    printf("\n%d\t%d\t\t%d\t\t%d",i,p->data,p,p->next);
}
node *delt_fst(node *h)
{
    node *z,*t;
    for(z=h;z->next!=h;z=z->next);
    t=h;
    h=h->next;
    free(t);
    z->next=h;
    printf("\nAfter Deletion of first element :- ");
    return h;
}
node *del_lst(node *h)
{
    node *z,*t;
    for(z=h;z->next->next!=h;z=z->next);
    t=z->next;
    z->next=h;
    free(t);
    printf("\nAfter Deletion of last element :- ");
    return h;
}
node *del_pos(node *h)
{
    int n,c=0,i=0;
    node *z,*p,*ct;
    printf("\nEnter Position to delete :- ");
    scanf("%d",&n);
    ct=z=h;
    for(i=1;ct->next!=h;ct=ct->next,i++);
    if(n<=0 || n>i)
    {
        printf("\nInvalid Position\n");
        return h;
    }
    else if(n==1)
    {
        delt_fst(h);
    }
    else if(n==i)
    {
        del_lst(h);
    }
    else
    {
        printf("After Deletion of %d position element :- ",n);
        // z=h;
        while(z!=NULL)
        {
            c++;
            if(c==n-1)
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
    // printf("After Deletion of %d position element :- ",n);
    // // z=h;
    // while(z!=NULL)
    // {
    //     c++;
    //     if(c==n-1)
    //     {
    //         p=z->next;
    //         z->next=p->next;
    //         free(p);
    //         break;
    //     }
    //     z=z->next;
    // }
    // return h;
}
int main()
{
    node *head;
    head=create();
    show(head);
    head=delt_fst(head);
    show(head);
    head=del_lst(head);
    show(head);
    head=del_pos(head);
    show(head);
    return 0;
}