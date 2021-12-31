#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    while (n > 0)
    {
        m++;
        n--;
    }
    printf("%d", m);
    return 0;
}