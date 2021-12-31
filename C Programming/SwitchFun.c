#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    char ope;
    printf("Enter the Operation:");
    scanf("%c", &ope);
    switch (ope)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}