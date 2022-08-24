/* write a c program for DFT 
Input=
1
14
1
66
1
7
1
56
2
3
Output=
Preorder Traversal:14->7->66->56
Inorder Traversal:7->14->56->66
Postorder Traversal:7->56->66->14

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
struct node *insert(struct node *root,int data);
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);
void depth(struct node *root);
int main()
{
int ch,m,n,a;
while(1)
{
scanf("%d",&ch);
switch(ch)
{
case 1:
scanf("%d",&n);
root=insert(root,n);
break;
case 2:depth(root);
break;
case 3:
exit(0);
default:printf("\nInvalid Option");
}}}
struct node *getnode(int n)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=n;
temp->left=NULL;
temp->right=NULL;
return temp;
}
struct node *insert(struct node *root,int data)
{
if(root==NULL)
{
root=getnode(data);
return root;
}
else if(data<=root->data)
root->left=insert(root->left,data);
else
root->right=insert(root->right,data);
return root;
}
void depth(struct node *root)
{
printf("\nPreorder Traversal:");
preorder(root);
printf("\nInorder Traversal:");
inorder(root);
printf("\nPostorder Traversal:");
postorder(root);
}
void preorder(struct node *root)
{
if(root==NULL)
return;
printf("%d->",root->data);
preorder(root->left);
preorder(root->right);
}
void inorder(struct node *root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d->",root->data);
inorder(root->right);
}
void postorder(struct node *root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d->",root->data);
}