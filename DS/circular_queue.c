// 28-08-2023
//circular queue
#include<stdio.h>
#include<conio.h>
#define s 5
int queue[s],front=-1,rear=-1;
void insert()
{
    if((front==0 && rear==s-1)||(rear<front&&rear+1==front))
    {
        printf("\nQueue is full.\n");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        // printf("Enter Data :- ");
        // scanf("%d",&queue[rear]);
        // queue[rear]=val;
    }
    else if((front==0 && rear<s-1)||(rear<front && (rear+1)!=front))
    {
        rear++;
        // printf("Enter Data :- ");
        // scanf("%d",&queue[rear]);
    }
    else if(rear==s-1 && front!=0)
    {
        rear=0;
    }
    printf("\nEnter Data :- ");
    scanf("%d",&queue[rear]);
}
void show()
{
    if(front==-1 && rear==-1)
    {
        printf("\nqueue is empty.\n");
    }
    else if(front<=rear)
    {
        for(int i=front;i<=rear;i++)
        {
            printf("\n%d\t",queue[i]);
        }
    }
    else if(front>rear)
    {
        for(int i=front;i<s;i++)
        {
            printf("\n%d\t",queue[i]);
        }
        for(int i=0;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
void delete()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is Empty.\n");
        return;
    }
    else if(front==rear)
    {
        front--;
        rear--;
    }
    else if((front<rear) ||(front>rear && front<s-1))
    {
        front++;
    }
    else if(front>rear && front==s-1)
    {
        front=0;
    }
}
int main()
{
    char ch;
    do
    {
        printf("\nEnter \nI:-Insert\nD:-Delete\nQ:-Quit");
        printf("\nEnter Option :- ");
        ch=getche();
        switch(ch)
        {
            case 'I':
            case 'i':
                insert();
                break;
            case 'D':
            case 'd':
                delete();
                break;
            case 'Q':
            case 'q':
                break;
            default:
                printf("\nInvalid choice :- ");
        }
        show();
    }while(ch=='I' || ch=='i' ||ch=='D' || ch=='d');
       return 0;
}