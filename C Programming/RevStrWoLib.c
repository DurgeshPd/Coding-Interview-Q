#include <stdio.h>
int main()
{
    int i, len = 0;
    char str[20];
    scanf("%s", str);
    while (str[len] != '\0')
        len++;
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}