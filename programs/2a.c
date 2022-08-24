/* Write a C program to implementCIRCULAR  QUEUE operations using array

case = t1
input = 1 
12 
1 
21 
1 
45
1
50
3 
4
output = 12 21 45 50

case = t2
input = 2 4
output = queue is underflow

case = t3
input = 1 12 1 21 1 45 1 50 2 2 3 4
output = deleted element is:12
deleted element is:21
45
50

*/
//Start writing program from here
#include<stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 4
int queue[QUEUE_SIZE];
int front=-1,rear=-1;
void enqueue(int);
void dequeue();
void display();
void main()
{
    int ch,ele;
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    scanf("%d",&ele);
                    enqueue(ele);
                    break;
            case 2 :
                    dequeue();
                    break;
            case 3 :
                    display();
                    break;
            case 4 :
                    exit(0);
            default :
                    printf("invalid choice\n");
        }
    }
}
void enqueue(int ele)
{
    if(((rear==QUEUE_SIZE-1)&&(front==-1))||((front==rear)&&(front!=-1)))
    printf("\nQueue is full\n");
    else if((rear==QUEUE_SIZE-1)&&(front!=-1))
    {
        rear=0;
        queue[rear]=ele;
    }
    else
    {
        rear++;
        queue[rear]=ele;
    }
}
void dequeue()
{
    if((front==rear)&&(front==-1))
    printf("queue is underflow\n");
    else
    {
        if(front==QUEUE_SIZE-1)
        front=-1;
        front++;
        printf("deleted element is : %d\n",queue[front]);
        if(front==rear)
        front=rear=-1;
    }
}
void display()
{
    int i;
    if((front==rear)&&(front==-1))
    printf("queue is empty\n");
    else
    {
        if(front<rear)
        {
            for(i=front+1;i<=rear;i++)
            printf("%d ",queue[i]);
        }
        else
        {
            for(i=0;i<=rear;i++)
            printf("%d ",queue[i]);
            for(i=front+1;i<=QUEUE_SIZE-1;i++)
            printf("%d ",queue[i]);
        }
    }
}