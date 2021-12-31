#include <stdio.h>
int main()
{
    int n, i = 1, t;
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        i = i * n;
        n--;
    }
    n = t;
    printf("factorial of %d is %d", n, i);
    return 0;
}