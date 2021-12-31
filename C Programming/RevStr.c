#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string to reverse:");
    gets(s);
    strrev(s);
    printf("The Reverse String is:%s", s);
    return 0;
}