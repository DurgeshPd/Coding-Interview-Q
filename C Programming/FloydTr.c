#include <stdio.h>
int main()
{
    int x = 1, i, j, n;
    printf("Enter the value for n:");
    scanf("%d", &n);
    for (i = 0; j < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}