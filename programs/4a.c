/* Write a C program to implement Infix to Postfix expresson conversion

Test Cases:
case = t1
input = a+b*c
output = abc*+

case = t2
input = (a+b)*c
output = ab+c*
*/
//Start writing program from here
#include<stdio.h>
#include<ctype.h>
#define STACK_SIZE 100
char stack[STACK_SIZE];
int top= -1;
void push(char[],char);
char pop(char[]);
int getpriority(char);
void main()
{
    char infix[100],postfix[100],temp;
    int i,j=0;
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='(')
        push(stack,infix[i]);
        else if(isalpha(infix[i]) || isdigit(infix[i]))
        {
            postfix[j]=infix[i];
            j++;
        }
        else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='%' || infix[i]=='^')
        {
            while((getpriority(stack[top]))>=(getpriority(infix[i])))
            {
                postfix[j]=pop(stack);
                j++;
            }
            push(stack,infix[i]);
        }
        else if(infix[i]==')')
        {
            while(stack[top]!='(')
            {
                postfix[j]=pop(stack);
                j++;
            }
            temp=pop(stack);
        }
    }
        while(top!=-1)
        {
            postfix[j]=pop(stack);
            j++;
        }
        postfix[j] = '\0';
        printf("postfix exp is:%s",postfix);
    
}
void push(char stack[],char element)
{
    if(top==STACK_SIZE-1)
    printf("stack  overflow");
    else
    {
        top++;
        stack[top]=element;
    }
}
char pop(char stack[])
{
    char val;
    if(top==-1)
    printf("underflow");
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
int getpriority(char op)
{
    if(op=='^')
    return 2;
    else if(op=='/' || op=='*' || op=='%')
    return 1;
    else if(op=='+' || op=='-')
    return 0;
    else
    return -1;
}