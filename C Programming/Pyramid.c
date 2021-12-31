#include <stdio.h>
int main()
{
    int n, i, s, j, k;
    printf("Enter the n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s < n - i; s++)
        {
            printf(" ");
        }
        k = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d", k++);
        }
        k = k - 2;
        for (j = 1; j < i; j++)
        {
            printf("%d", k--);
        }
        printf("\n");
    }
}