/* Write a C program to implement Insertion sort

Test Cases:
input = 5
2 5 6 10 3
output = 2 3 5 6 10
*/
//Start writing program from here
void insertionsort(int a[],int n);
#include<stdio.h>
void main()
{
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    for(i=0;i<n;i++)
    printf("%3d",a[i]);
}
void insertionsort(int a[], int n)
{
    int i,j,index;
    for(i=1;i<n;i++)
    {
        index=a[i];
        j=i;
        while((j>0) && (a[j-1]>index))
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=index;
    }
}
