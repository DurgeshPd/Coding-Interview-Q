#include <stdio.h>
int main()
{
    int i, len = 0;
    char str[20];
    scanf("%s", str);
    while (str[len] != '\0')
    {
        len++;
    }
    printf("%d", len);
    return 0;
}