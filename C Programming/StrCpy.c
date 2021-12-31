#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    gets(str1);
    strcpy(str2, str1);
    puts(str2);
    return 0;
}