#include <stdio.h>
int main()
{
    int n, a = 1, b = 0, i, c;
    printf("enter the value for n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a);
        c = b - a;
        b = a;
        a = c;
    }
    return 0;
}