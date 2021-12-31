#include <stdio.h>
int main()
{
    int n, f, r, i, s, m, t;
    printf("Enter the Range:");
    scanf("%d %d", &n, &m);
    for (n; n <= m; n++)
    {
        t = n;
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            f = 1;
            for (i = r; i >= 1; i--)
            {
                f = f * i;
            }
            s = s + f;
            n = n / 10;
        }
        n = t;
        if (n == s)
            printf("%d ", n);
    }
    return 0;
}