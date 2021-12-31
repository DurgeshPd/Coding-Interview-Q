#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int i, len;
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
        if (str[i] == ' ')
            str[i] = '\0';
    printf("%s", str);
    return 0;
}