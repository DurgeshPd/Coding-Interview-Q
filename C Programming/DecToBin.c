#include <stdio.h>
int main()
{
    int num, sum = 0, base = 1, rem;
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 2;
        sum = sum + (rem * base);
        base = base * 10;
        num = num / 2;
    }
    printf("%d", sum);
    return 0;
}