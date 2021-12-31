#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i, l;
    printf("Enter the string in upper or lower:");
    scanf("%s", &a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] += 32;
        else if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
    }
    printf("%s", a);
    return 0;
}