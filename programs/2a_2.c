/* Write a C program to implement STACK operations using array

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
output = 45 21 12

example 2:
case = t2
input = 2 4
output = stack is empty
*/
//Start writing program from here
#include<stdio.h>
#include<stdlib.h>
#define stack_size 3
int top=-1;
int stack[stack_size];
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
      scanf("%d",&choice);
      switch(choice)
      {
       case 1:
       {
              push();
              break; 
       }
       case 2:
       {
               pop();
              break;
       }
       case 3:
       {
              display();
              break;
       }
       case 4:
       {
           exit(0);
       }      
      }
    }
}
void push()
{
  int a;
    scanf("%d",&a);
    if(top==stack_size-1)
    { 
        printf("\nstack is full");
    }
    else
    { 
        top++;
        stack[top]=a;
    }
        
}
void pop()
{ 
    if(top==-1)
    {
         printf("stack is empty");
    }
    else
    {
        printf("%d is popped from stack\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
     {
         printf("stack is empty");
     }
     else
     {
         for(i=top;i>=0;i--)
         printf("%d ",stack[i]);
     }
     
     
}