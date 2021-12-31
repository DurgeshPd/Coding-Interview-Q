#include <stdio.h>
int main()
{
    int num, i, temp, sum = 0, rem;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem); //0,1,153,370,371,407
        num = num / 10;
    }
    num = temp;
    if (num == sum)
        printf("%d is an armstrong number", num);
    else
        printf("%d is not an armstrong number", num);
    return 0;
}