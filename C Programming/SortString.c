#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], t;
    int i, j, n;
    gets(a);
    n = strlen(a);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%s ", a);
    return 0;
}