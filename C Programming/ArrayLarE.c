#include <stdio.h>
int main()
{
    int a[20];
    int i, j, t, n, lar;
    printf("Enter no.Ele:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    lar = a[0];
    for (i = 0; i < n; i++)
    {
        if (lar < a[i])
            lar = a[i];
    }
    printf("%d", lar);
    return 0;
}