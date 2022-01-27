#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, days;
    char month[15];

    printf("Enter the month number : ");
    scanf("%d", &m);

    if(m==1)
    {
        strcpy(month, "January");
        days = 31;
    }
    else if(m==2)
    {
        strcpy(month, "February");
        days = 28;
    }
   
    printf("The month is %s and it has %d days ", month, days);
    return 0;
}
