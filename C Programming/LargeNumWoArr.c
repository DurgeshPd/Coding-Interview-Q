#include <stdio.h>
int main()
{
    int ele, i, max = 0, min, n;
    printf("Enter n number:");
    scanf("%d", &n);
    min = n;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        if (ele > max)
            max = ele;
        if (ele < min)
            min = ele;
    }
    printf("max is:%d min is:%d", max, min);
}