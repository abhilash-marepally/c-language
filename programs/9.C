/* write a c program for BINARY SEARCH TREE
case = t1
input =1
15
1
10
1
23
2
10
4
3
10
1
23
4
5
output=
23->15->
10 element not found
23->23->15->

case = t2
input=
1
35
1
13
1
56
1
12
1
27
2
13
4
5
output=
12->27->56->35->

case=t3
input = 6
5
output =
invalid choice

case=t4
input=
1
100
1
50
1
200
1
150
1
300
4
2
300
4
5
output=
50->150->300->200->100->
50->150->200->100->

 start writing from here....! */
 
 
 
 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
     int data;
     struct node *left;
     struct node *right;
 };
 struct node *root=NULL;
 struct node *getnode(int n);
 int rear=-1,front=-1;
 struct node *insert(struct node *root,int data);
 int search(struct node *root,int data);
 struct node *del(struct node *root,int n);
 struct node *rmin(struct node *root);
 void display()
 {
     int ch,n,k,key,a;
     while(1)
     {
         scanf("%d",&ch);
         switch(ch)
         { 
             case 1:
             scanf("%d",&n);
             root=insert(root,n);
             break;
             case 2:
             scanf("%d",&k);
             root=del(root,k);
             break;
             case 3:
             scanf("%d",&key);
             if (search(root,key)==1)
             printf("%d element is found\n",key);
             else
             printf("%d" element is not found\n",key);
             break;
             case 4:display(root);
             break;
             case 5:exit(0);
             default :printf("invaild choice");
         }
     }
 }
 struct node *getnode(int n)
 {
     struct node *temp=(struct node *)malloc(sizeof(struct node));
     temp->data=n;
     temp->left=NULL;
      temp->right=NULL;
      return temp;
 }
 struct node*insert(struct node *root,int data)
 {
     if(root=NULL)
     {
         root=getnode(data);
         return root;
     }
     else if (data<=root->data)
     root->left=insert(root->left,data);
     else
     root->right=insert(root->right,data);
     return root
 }
 int search(struct node root,int data)
 {
     if(root==NULL)
     return 0;
     else if(data<root->data)
     return search(root->left,data);
     else
     return search(root->right,data);
}
void display(struct node *root)
{
    if(root==NULL)
    return;
    display(root->left);
    display(root->right);
    printf("%d->"root->data);
}
struct node *rmin(struct node*root)
{
    if(root==NULL)
    return 0;
    while(root->left!=NULL)

    root=root->left,
}
struct node *del(struct node *root,int n)
{
    struct node *temp;
    if(root==NULL)
    return root;
    else if(n<root->data)
    root->left=del(root->left,n);
    else if(n>root->data)
    root->right=del(root->right,n);
    else
    {
        if(root->left==NULL&&root->right==NULL)
    {
        free(root);
        root=NULL;
    }
    else if(root->left==NULL)
    {
     temp=root;   
    }
    
}