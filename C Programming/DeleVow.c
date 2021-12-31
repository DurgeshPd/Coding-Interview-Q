#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], temp[20];
    int i = 0, j = 0;
    printf("Enter the string:");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            temp[j++] = str[i];
        }
        i++;
    }
    temp[j] = '\0';
    strcpy(str, temp);
    printf("%s", str);
    return 0;
}