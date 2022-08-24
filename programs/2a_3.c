/* Write a C program to implement QUEUE operations using array

Test Cases:
example 1:
input = 1 
12 
1 
21 
1 
45 
3 
4
output = 12 21 45

example 2:
case = t2
input = 2 4
output = queue is empty
*/
//Start writing program from here
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void enqueue(int);
void dequeue();
void display();
int queue[SIZE];
int front=-1,rear=-1;
int main()
{
    int ch,value;
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:scanf("%d",&value);
            enqueue(value);
                break;
            case 2:dequeue(value);
                break;
            case 3: display();
             break;
             case 4:exit(0);
             break;
            default:
            printf("invalid choice\n");
        }
    }
}
void enqueue(int data)
{
  if(rear==SIZE-1)
  {
      printf("queue is full\n");
  }
  else
  {
      rear++;
      queue[rear]=data;
  }
}
void dequeue()
{
    if(front==rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        front++;
        printf("%d is deleted from queue\n",queue[front]);
    }
}
void display()
{
    int i;
    if(front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front+1;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}