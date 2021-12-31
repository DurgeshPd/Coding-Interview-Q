#include <stdio.h>
#include <stdlib.h>
void str_rev(char str[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[30];
    int start = 0, end = 0;
    scanf("%[^\n]s", str);
    while (str[end])
    {
        for (end = start; str[end] && str[end] != ' '; end++)
            ;
        str_rev(str, start, end - 1);
        start = end + 1;
    }
    printf("%s", str);
    return 0;
}