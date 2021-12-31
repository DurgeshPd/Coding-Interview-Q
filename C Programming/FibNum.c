#include <stdio.h>
int main()
{
    int n, a = 1, b = 0, i, c;
    printf("enter the value for n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
