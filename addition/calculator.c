#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num1, num2, result;
    char oper;
    char operation[15];

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("Enter the operation type : ");
    scanf(" %c", &oper);

    if(oper=='+')
    {
        strcpy(operation, "addition");
        result = num1 + num2;
    }
    else if(oper=='-')
    {
        strcpy(operation, "subtraction");
        result = num1 - num2;
    }
    else if(oper=='*')
    {
        strcpy(operation, "multiplication");
        result = num1 * num2;
    }
    else if(oper=='%')
    {
        strcpy(operation, "division");
        result = num1 % num2;
    }

    printf("The %s of num1 and num2 is %d ", operation, result);
    return 0;
}
