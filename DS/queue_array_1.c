// 16-08-2023
#include<stdio.h>
#include<conio.h>
#define size 6
int q[size],front=-1,rear=-1;
void insert()
{
    int val;
    printf("\nEnter data :- ");
    scanf("%d",&val);
    if(front==0 && rear==size-1)
    {
        printf("\nqueue is full.");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        q[rear]=val;
    }
    else
    {
        rear++;
        q[rear]=val;
    }
}

void delete()
{
    if(front==-1 && rear==-1)
    {
        printf("\nqueue is Empty.");
        return;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void show()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty.");
        return;
    }
    printf("\nData\t");
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }
}
int main()
{
    char ch;
    // int n;
    do{
        printf("\nEnter\nI:-Insert\nD:-Delete\nS:-Show\nQ:-Quit");
        printf("\nEnter choice :- ");
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
                // peep();
                // break;
            case 'S':
            case 's':
                show();
                break;
            case 'Q':
            case 'q':
                break;
            default:
                printf("\nInvalid choice :- ");
        }
        // printf("\nEnter Data :  ");
        // scanf("%d",&n);
        
        // printf("More Data?  ");
        // ch=getche();
    }while(ch=='I'||ch=='i'||ch=='D'||ch=='d'||ch=='S'||ch=='s');
    // show();delete();
    // show();delete();
    // show();delete();
    // show();
}