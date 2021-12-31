#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the first and last num:");
    scanf("%d %d", &m, &n);
label:
    printf("%d ", m);
    m++;
    if (m <= n)
        goto label;
    return 0;
}