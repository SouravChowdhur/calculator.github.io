#include <stdio.h>
int main()
{
    float a, b, c;
    char ch;
first:
    printf("\nEnter your first number:\n");
    scanf("%f", &a);
    printf("Enter your second number:\n");
    scanf("%f", &b);
    printf("Enter any operation you want to perform: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        c = a + b;
        printf("Your output is: %0.2f", c);
        goto first;
    case '-':
        c = a - b;
        printf("Your output is: %f", c);
        goto first;
    case '*':
        c = a * b;
        printf("Your output is: %f", c);
        goto first;
    case '/':
        c = a / b;
        printf("Your output is: %f", c);
        goto first;
    default:
        printf("Wrong input! Please try again");
        goto first;
    }
    return 0;
}