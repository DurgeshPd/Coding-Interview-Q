#include <stdio.h>
int main()
{
    int a[20], b[20], c[20], i, n;
    printf("Enter the Number of Ele:\n");
    scanf("%d", &n);
    printf("Enter the First Ele:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Second Ele:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    printf("Swapped First Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Swapped First Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}