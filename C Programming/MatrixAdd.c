#include <stdio.h>
int main()
{
    int i, j, r, c, m1[10][10], m2[10][10];
    printf("Enter rows and column:");
    scanf("%d %d", &r, &c);
    printf("Enter First Matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &m1[i][j]);
    }
    printf("Enter Second Matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &m2[i][j]);
    }
    printf("Result:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", m1[i][j] + m2[i][j]);
        printf("\n");
    }
    return 0;
}