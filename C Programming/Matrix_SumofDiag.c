#include <stdio.h>
int main()
{
    int a[10][10], sum = 0, i, j, r, c;
    printf("Enter Row and Col:");
    scanf("%d %d", &r, &c);
    printf("Enter the Ele:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("The Sum Of Diag:%d", sum);
    return 0;
}