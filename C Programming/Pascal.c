#include <stdio.h>
int main()
{
    int n, i, s, j, c;
    printf("enter the row:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
                c = 1;
            else
                c = (c * (i - j + 1)) / (j - 1);
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}