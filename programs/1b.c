/* Write a C program to implement Selection sort

Test Cases:
input = 5
2 5 6 10 3
output = 2 3 5 6 10
*/
//Start writing program from here
/*program to implement selection sort*/
#include<stdio.h>
void sort(int a[],int n);
int main()
{
int i,n,a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sort(a,n);

return 0;
}
void sort(int a[],int n)
{
    int min,temp,i,j;
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[min]>a[j])
                min=j;
            }
            if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }   
        
}for(i=0;i<n;i++)
printf("%d ",a[i]);
}
