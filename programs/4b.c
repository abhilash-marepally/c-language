/* Write a C program to implement Postfix expresson Evaluation

case = t1
input = abc*+
1
2
3
output = The simplified answer for abc*+ =7

case = t2
input = abc/d*+
2 3 8 4
output = The simplified answer for abc/d*+ =2
*/

//Start writing program from here
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define max 10
char p[max],ch;
int stack[max],op1,op2,temp,val,res,n;
int top=-1,i=0,j=0;
void push(int val);
int operate(int,int,char);
int pop();
int main()
{
    scanf("%s",p);
    while(p[i]!='\0')
    {
        ch=p[i];
        if(isalpha(ch))
        {
            scanf("%d",&val);
            push(val);
        }
        else
        {
            if(ch=='+'||ch=='-'||ch=='*'||ch=='/' || ch=='^')
            {
                op2=pop();
                op1=pop();
                res=operate(op1,op2,ch);
                push(res);
            }
        }
        i++;
    }
    res=pop();
    printf("%d",res);
}
int pop()
{
    n=stack[top];
    top=top-1;
    return n;
}
int operate(int op1,int op2,char ch)
{
    switch(ch)
    {   
        case '^':temp=pow(op1,op2);
                 break;
        case '+':temp=op1+op2;
                break;
        case '-':temp=op1-op2;
                 break;
        case '*':temp=op1*op2;
                break;
        case '/':temp=op1/op2;
                break;
    }
    return (temp);
}
void push(int val)
{
    top++;
    stack[top]=val;
}