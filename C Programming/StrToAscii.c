#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int n, i;
    gets(str);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        printf("%d ", str[i]);
    }
    return 0;
}