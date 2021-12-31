#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int a = 0, ch = 0, d = 0, v = 0, c = 0, i = 0;
    printf("Enter the string:");
    gets(str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                v++;

            else
                c++;
            a = v + c;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            d++;
        else
            ch++;
        i++;
    }
    printf("Count of \nAlphabets:%d \nDigits:%d \nSpecial characters:%d \nVowels:%d \nConsonants:%d", a, d, ch, v, c);
    return 0;
}