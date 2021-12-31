#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num[30];
    FILE *ptr;
    ptr = fopen("C:\\Users\\durge\\Documents\\File.txt", "w");
    if (ptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter a text:");
    scanf("%s", &num);
    fprintf(ptr, "%s", num);
    fclose(ptr);
    return 0;
}