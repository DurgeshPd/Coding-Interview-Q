#include <stdio.h>
int main()
{
    int n, i, j, c;
    printf("Enter the num:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    c++;
            }
            if (c == 2)
                printf("%d ", i);
        }
    }
    return 0;
}