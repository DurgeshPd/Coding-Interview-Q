#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[30];
    FILE *ptr;
    ptr = fopen("C:\\Users\\durge\\Documents\\File.txt", "r");
    if (ptr)
    {
        while (fscanf(ptr, "%s", c) != EOF)
            printf("%s", c);
        fclose(ptr);
    }
    return 0;
}