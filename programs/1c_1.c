/* Write a C program to implement Merge sort

Test Cases:
input = 8
21 51 6 10 3 45 5 78
output = 3 5 6 10 21 45 51 78 
*/
//Start writing program from here
#include<stdio.h>
int D(int a[],int ,int );
int C(int a[],int ,int ,int);
int main()
{
int i,n,a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
D(a,0,n-1);
for(i=0;i<n;i++)
printf("%d ",a[i]);

}
int D(int a[10],int low,int high)
{
 int mid;
 if(low<high)
 {
     mid=(low+high)/2;
     D(a,low,mid);
     D(a,mid+1,high);
     C(a,low,mid,high);
}
 }
 int C(int a[10],int low,int mid,int high)
 {
     int b[10],i,j,k,h;
     i=low;
     j=mid+1;
     k=low;
     while(i<=mid&&j<=high)
     {
         if(a[i]<a[j])
         b[k++]=a[i++];
         else
         b[k++]=a[j++];
     }
     while(i<=mid)
     b[k++]=a[i++];
     while(j<=high)
     b[k++]=a[j++];
     for(i=low;i<=high;i++)
     a[i]=b[i];
 }

