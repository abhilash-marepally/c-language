/* write a c program for double linked list
case = t1
input=
1
12 1
1 
45 2
1 
34 1
3
5
output=
FORWARD Traversal: 34 12 45 
BACKWARD Traversal: 45 12 34                                                                               

case = t2
input= 
1
12 1
1 
45 2
1 
34 1
3
2
2
3
5
output =
FORWARD Traversal: 34 12 45 
BACKWARD Traversal: 45 12 34 
FORWARD Traversal: 34 45 
BACKWARD Traversal: 45 34 

case = t3
input= 
1                                                                               
12 1                                                                            
1                                                                               
13 3
5
output =
Enter a valid position 

case = t4
input=
1
10 1
1
20 2
1
45 2
3
2
3
3
5
output=
FORWARD Traversal: 10 45 20 
BACKWARD Traversal: 20 45 10 
FORWARD Traversal: 10 45 
BACKWARD Traversal: 45 10 

case = t5
input = 
1                                                                               
12 1                                                                            
1                                                                               
13 2                                                                            
4 40
5
output=
element not found   

case = t6
input =
1
12 1
1 
13 2
1
23 3
4 13
5
output=
13 found at position 2
 start writing from here....! */
   #include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;
void insert();
void delete();
void display();
void search();
int c=0;
void main()
{
    int ch;
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
            case 5: exit(0);
        }
    }
}
void insert()
{
    struct node *newnode,*temp,*x;
    int n,p,i;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d%d",&n,&p);
    if(p<=0||p>c+1)
    printf("Enter a valid position\n");
    else
    {
        c++;
        newnode->data=n;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else if(p==1)
        {
            x=head;
            newnode->next=head;
            head=newnode;
            x->prev=newnode;
        }
        else
        {
            temp=head;
            for(i=1;i<p-1;i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
            if(p!=c)
            {
                temp=newnode->next;
                temp->prev=newnode;
            }
        }
    }
}
void delete()
{
    struct node *temp1=head,*temp2;
    int p,i;
    scanf("%d",&p);
    if(p<=0||p>c)
    printf("Enter a valid position\n");
    else
    {
        c--;
    if(p==1)
    {
        head=temp1->next;
        if(c!=0)
        {
            temp2=temp1->next;
            temp2->prev=temp1->prev;
        }
        free(temp1);
    }
    else
    {
        for(i=1;i<p-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        if(p!=c+1)
        {
            temp1=temp2->next;
            temp1->prev=temp2->prev;
        }
        free(temp2);
    }
    }
}
void display()
{
    struct node *x=head,*y=head;
    int i;
    if(x==NULL)
    printf("DLL is empty\n");
    else
    {
        printf("\nFORWARD Traversal:");
    while(x!=NULL)
    {
        printf(" %d",x->data);
        x=x->next;
    }
    for(i=0;i<c-1;i++)
    {
        y=y->next;
    }
    printf("\nBACKWARD Traversal:");
    while(y!=NULL)
    {
        printf(" %d",y->data);
        y=y->prev;
    }
    }
}
void search()
{
    struct node *x;
    x=head;
    int n,p=0;
    scanf("%d",&n);
    if(x==NULL)
    {
        printf("DLL is empty\n");
        return;
    }
    else
    {
    while(x!=NULL)
    {
        p++;
        if(x->data==n)
        {
            printf("\n%d found at position %d\n",n,p);
            return;
        }
        x=x->next;
    }
    printf("element not found\n");
    }
}