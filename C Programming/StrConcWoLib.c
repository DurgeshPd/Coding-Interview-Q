#include <stdio.h>
int main()
{
    char str1[20], str2[20], str3[20];
    int i = 0, j = 0;
    scanf("%s %s", str1, str2);
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("%s ", str3);
    return 0;
}