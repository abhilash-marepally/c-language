/* Write a C program to implement Bubble sort

Test Cases:
input = 5
2 5 6 10 3
output = 2 3 5 6 10
*/
//Start writing program from here
#include<stdio.h>
void bubblesort (int a[], int n);
int main()
{
    int i,n,temp,j,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
    return 0;
}//closing of main
void bubblesort (int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    