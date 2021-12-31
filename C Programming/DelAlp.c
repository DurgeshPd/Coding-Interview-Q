#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], n, i, k, c = 0;
    gets(a);
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        if (!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')))
            printf("%c", a[i]);
    }
    return 0;
}