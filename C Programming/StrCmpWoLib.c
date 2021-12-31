#include <stdio.h>
int cmp(char[], char[]);
int main()
{
    char str1[20], str2[20];
    scanf("%s %s", str1, str2);
    int c = cmp(str1, str2);
    if (c == 0)
        printf("Same");
    else
        printf("not same");
    return 0;
}
int cmp(char str1[], char str2[])
{
    int i = 0, flag = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}