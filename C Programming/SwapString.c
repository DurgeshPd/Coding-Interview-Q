#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20], str3[20];
    int n;
    gets(str1);
    gets(str2);
    strcpy(str3, str1);
    strcpy(str1, str2);
    strcpy(str2, str3);
    puts(str1);
    puts(str2);
    return 0;
}