#include <stdio.h>
int main()
{
    int a[10], i, great = a[0];
    printf("enter the 10 value:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > great)
        {
            great = a[i];
        }
    }
    printf("Greatest of 10 num is:%d", great);
    return 0;
}