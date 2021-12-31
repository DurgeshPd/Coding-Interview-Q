#include <stdio.h>
int main()
{
    char str[20], *p;
    int c = 0;
    scanf("%s", str);
    p = str; //str[0];
    while (*p != '\0')
    {
        c++;
        p++;
    }
    printf("%d", c);
    return 0;
}
