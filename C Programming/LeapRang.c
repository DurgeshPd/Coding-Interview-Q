#include <stdio.h>
int main()
{
    int i, m, n;
    printf("Enter range to check: ");
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
            printf("%d ", i);
    }
}