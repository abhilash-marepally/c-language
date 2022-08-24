/* Write a C program to implement single linked list

Test Case example:
case = t1
input= 
1                                                                               
12 1                                                                            
1                                                                               
14 1                                                                            
1                                                                               
24 2                                                                            
3
6
output =
14-> 24-> 12->

case = t2
input= 
1                                                                               
12 1                                                                            
1                                                                               
14 1                                                                            
1                                                                               
24 2                                                                            
3
6

case = t3
input= 
1                                                                               
12 1                                                                            
1                                                                               
13 3
6
output =
Enter a valid position 

*/
//Start writing program from here

#incude<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
        struct node*next;
};
struct node*next;
void insert();
void delete();
void display();
void search();
void reverse(struct node*);
int c=0,b=0;
void main()
{
    int a,ch;
    head=NULL;
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: search();
            break;
            case 5: reverse(head);
            break;
            case 6: exit(0);
            default: printf ("invalid choice");
        }
    }
}
void insert()
{
    int n,p,i;
    struct node*temp 2;
    scanf("%d%d",&n,&p);
    if(p<=0||p>c+1)
    printf("Enter a valid position");
    else
    {
        c++;
        temp -> data=n;
        temp -> next=NULL;
        if(p==1)
        {
            temp -> next=head;
            head=temp;
        }
        else
        {
            temp 2=head;
            for(i=0;i<p-2;i++)
            {
                temp 2=temp 2 -> next;
            }
        }
}
            
        }
    }
    
    
}
}