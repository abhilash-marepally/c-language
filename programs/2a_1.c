/* Write a C program to implement QUICK sort

Test Cases:
input = 7
20 2 90 1 50 78 40
output = 1 2 20 40 50 78 90
*/
//Start writing program from here
#include<stdio.h>
int A(int a[10],int left,int right);
int main()
{
int i,n,a[1000],left,right;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
A(a,0,n-1);
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
int A(int a[10],int left,int right)
{
    int pivot,t,l,r,temp;
        if(left<right)
        {
            
            pivot=left;
            l=left;
            r=right;
            while(l<r)
            {
            while(a[l]<=a[pivot]&&l<=right)
            l++;
            while(a[r]>a[pivot])
            r--;
            if(l<r)
            {
                t=a[l];
                a[l]=a[r];
                a[r]=t;
            }
            }
            temp=a[pivot];
            a[pivot]=a[r];
            a[r]=temp;
            A(a,left,r-1);
            A(a,r+1,right);
        }
}
