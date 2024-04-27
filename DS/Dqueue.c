// 20-09-2023
#include<stdio.h>
#define s 5
int q[s];
int front=-1,rear=-1;
void insertfs(int val)
{
    if(front=s-1 || front+1==rear)
    {
        printf("\nInsertion not possible at this side.");
        return;
    }
    else
    {
        front++;
        q[front]=val;
    }
    // else if(front==-1 && rear!=0)
    // {
    //     front++;
    //     q[front]=val;
    // }
    // else if(front!=-1 && front+1!=rear)
    // {
    //     front++;
    //     q[front]=val;
    // }
}
void inserts(int val)
{
    if(rear-1==front || front==s-1)
    {
        printf("\nInsertion not possible at this side.");
        return;
    }
    else if(rear==-1)
    {
        rear=s-1;
        q[rear]=val;
    }
    else
    {
        rear--;
        q[rear]=val;
    }
}