#include <stdio.h>
int main()
{
    int a[10], i, j, t, n;
    printf("Enter no.Ele:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%d %d %d", a[0], a[1],a[n-1]);
    return 0;
}